#!/usr/bin/env bash

source_folder="/Users/hsnayrus/Duke-Courses/ECE551_Repos/ECE551_QihengGao"
target_folder="/Users/hsnayrus/ProjectsAndLearning/KnowledgeHub/All-Of-Programming/myECE551_Assignments/Assignments/Attempt/"
assg_files="Assignment-Files"
sol_files="Solution-Files"

bold_text=$(tput bold)
normal_text=$(tput sgr0)

: <<'comment'
So I will just create another directory within the assignment itself where I will keep all the files
relevant to the assignment.
Later I can use that to create a JSON mapping of assignment to the files it has already(part of the question)
and another folder for the solution files
comment

for folder in "$source_folder"/*; do
    if [ -d "$folder" ]; then
        # Only get the last part of the folder instead of the entire path
        folder_name="${folder#$source_folder/}"
        echo -e "Folder Found: $bold_text${folder_name}$normal_text\n"
        
        target_folder_full_path="$target_folder$folder_name"
        
        # If the directory already exists, then do not replace it
        if [ -d "$target_folder_full_path" ]; then
            echo "Directory already exists. Skipping!"
        else
            mkdir "$target_folder_full_path"
            cp -v "$folder"/* "$target_folder_full_path"/
        fi
    fi
done
