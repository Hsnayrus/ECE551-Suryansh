#!/usr/bin/env bash


: <<'Comment'
This script is used to create the folder Assg-Files in all the assignment folders 
Comment

source_folder="/Users/hsnayrus/ProjectsAndLearning/KnowledgeHub/All-Of-Programming/ECE551-Suryansh/Assignments/Attempt"

for folder in "$source_folder"/*; do
    if [ -d "$folder" ]; then
        folder_to_create="$folder/Assg-Files"
        file_to_move="$folder/README"
        # echo "Creating: $folder_to_create"
        # echo "Moving: $file_to_move to $folder_to_create/"
        mkdir -v "$folder_to_create"
        mv -v "$file_to_move" "$folder_to_create"
    fi
    # if[ -d "$folder" ]; then
    #     # Now that we know we have correct folder, we can create the Assg-Files folder and then
    #     folder_to_create="$folder/Assg-Files"
    #     file_to_move="$folder/README"
    #     echo "$folder_to_create"
    #     echo "file_to_move"
    #     # mkdir -v "$folder_to_create"
    #     # mv -v "$file_to_move" "$folder_to_create"
    # fi
done

