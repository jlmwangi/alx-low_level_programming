#!/bin/bash

lib_name="liball.a"
source_files=(*.c)

for file in "${source_files[@]}"; do
	obj_file="${file%.c}.o"
	gcc -c "$file" -o "$obj_file"
done

ar rc "$lib_name" "${source_files[@]%.c}.o"
