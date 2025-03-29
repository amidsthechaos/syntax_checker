#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check for forbidden keywords
void check_keyword_usagee(const char *line, FILE *output_file) {
    if (strstr(line, "gets") || strstr(line, "scanf")) {
        fprintf(output_file, "Warning: Use of gets or scanf detected - Consider using safer alternatives like fgets.\n");
    }
    if (strstr(line, "goto")) {
        fprintf(output_file, "Warning: Use of 'goto' detected - Consider using structured loops instead.\n");
    }
}

// Function to check indentation
void check_indentation(const char *line, FILE *output_file) {
    if (line[0] != '\t' && line[0] != ' ') {
        fprintf(output_file, "Warning: Code line not indented properly.\n");
    }
}

// Function to analyze a file for style issues
void analyze_code_style(const char *filename) {
    FILE *file = fopen(filename, "r");
    FILE *output_file = fopen("style_report.txt", "w");
    
    if (!file || !output_file) {
        printf("Error opening file.\n");
        return;
    }

    char line[512];
    while (fgets(line, sizeof(line), file)) {
        check_keyword_usagee(line, output_file);
        check_indentation(line, output_file);
    }

    fclose(file);
    fclose(output_file);
    printf("Style check complete! Report saved in 'style_report.txt'.\n");
}
