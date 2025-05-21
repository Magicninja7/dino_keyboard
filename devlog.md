Made by: @Magic (slack)
total hours - ~3

# Day 1 (19.05.2025) ~1hour
Created a folder for the project, and added symbols & footprints for both xiao and raspi microcontrollers. Watched a couple videos on how to make a key matrix, and not too long later, i started making the matrix

# Day 2 (21.05.2025)
Today i finished the key matrix, and researched on how demanding would led matrixes be. due to gpio limitations, i switched to the raspi pico (originally used seeed rp2040 dip)
Afterward i researched a bit on how i can limit the number if gpio pins needed to create a led matrix. however i found no satisfactory one, so i just decided on a screen. But lcd are ugly, i hate the tint, slow speed, and small viewing angles. I found vfd screens, and decided on using that one. i added it onto the scematics, alongside a handful of led.



# BOM
 - vfd [screen](https://www.tme.eu/pl/details/m0220sd-202sdar1/wyswietlacze-vfd/newhaven-display-international/?brutto=1&currency=PLN&gQT=1)
 - 84 keys
 - raspi Pico
