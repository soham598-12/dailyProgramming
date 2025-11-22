#!/bin/bash

DATE=$(date +"%Y-%m-%d")
MESSAGE="Daily upload for $DATE"

git add .
git commit -m "$MESSAGE"
git push

echo "✔ Successfully uploaded: $MESSAGE"