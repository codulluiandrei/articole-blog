#!/bin/bash
# db - daily battle script template generator
# Check if the number of arguments is 1 or 0
if [ "$#" -gt 1 ]; then
    echo "Usage: $0 [<battle_number>]"
    exit 1
fi
# Change to the daily targets directory
cd daily
if [ "$#" -eq 0 ]; then
    # Create the HTML file for today target
    touch "$(date +'%d-%m-%y').html"
    # Open the HTML file in nano edtior
    nano "$(date +'%d-%m-%y').html"
elif [ "$#" -eq 1 ]; then
    # Create the HTML file for other day target
    touch "$1.html"
    # Open the HTML file in nano editor
    nano "$1.html"
fi
