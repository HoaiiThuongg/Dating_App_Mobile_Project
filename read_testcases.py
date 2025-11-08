#!/usr/bin/env python3
"""
Script to read test cases from Excel file and generate test files
"""
import openpyxl
import json
import sys
import os

def read_excel_testcases(file_path):
    """Read test cases from Excel file"""
    try:
        workbook = openpyxl.load_workbook(file_path)
        sheet = workbook.active
        
        testcases = []
        headers = []
        
        # Read headers (first row)
        for cell in sheet[1]:
            headers.append(cell.value if cell.value else "")
        
        # Read data rows
        for row_idx, row in enumerate(sheet.iter_rows(min_row=2, values_only=False), start=2):
            if not any(cell.value for cell in row):  # Skip empty rows
                continue
                
            testcase = {}
            for col_idx, cell in enumerate(row):
                header = headers[col_idx] if col_idx < len(headers) else f"Column{col_idx+1}"
                value = cell.value if cell.value else ""
                testcase[header] = str(value).strip()
            
            if any(testcase.values()):  # Only add non-empty testcases
                testcase['row_number'] = row_idx
                testcases.append(testcase)
        
        return testcases, headers
    except Exception as e:
        print(f"Error reading Excel file: {e}", file=sys.stderr)
        return [], []

def print_testcases(testcases, headers):
    """Print test cases in readable format"""
    print(f"\n{'='*80}")
    print(f"Found {len(testcases)} test cases")
    print(f"{'='*80}\n")
    
    for idx, tc in enumerate(testcases, 1):
        print(f"Test Case #{idx} (Row {tc.get('row_number', '?')}):")
        for header in headers:
            if header and tc.get(header):
                print(f"  {header}: {tc[header]}")
        print()

def export_to_json(testcases, output_file):
    """Export test cases to JSON file"""
    with open(output_file, 'w', encoding='utf-8') as f:
        json.dump(testcases, f, ensure_ascii=False, indent=2)
    print(f"\n✅ Exported {len(testcases)} test cases to {output_file}")

if __name__ == "__main__":
    excel_file = "Testcases.xlsx"
    
    if not os.path.exists(excel_file):
        print(f"❌ Error: File '{excel_file}' not found!", file=sys.stderr)
        sys.exit(1)
    
    print(f"📖 Reading test cases from {excel_file}...")
    testcases, headers = read_excel_testcases(excel_file)
    
    if not testcases:
        print("⚠️  No test cases found in Excel file!", file=sys.stderr)
        sys.exit(1)
    
    print_testcases(testcases, headers)
    export_to_json(testcases, "testcases.json")
    
    print(f"\n✅ Successfully processed {len(testcases)} test cases!")




