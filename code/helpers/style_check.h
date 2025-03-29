#ifndef STYLE_CHECK_H
#define STYLE_CHECK_H

#include<stdio.h>

void check_keyword_usage(const char *line, FILE *output_file);
void check_indentation(const char *line, FILE *output_file);
void analyze_code_style(const char *filename);

#endif
