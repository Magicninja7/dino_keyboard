title: DIno keyboard
author: @Magic (slack)
description: A completely custom keyboard!
created_at: 21.05.2025
total time: 32 hours

# Day 1 (19.05.2025) ~1hour
Created a folder for the project, and added symbols & footprints for both xiao and raspi microcontrollers. Watched a couple videos on how to make a key matrix, and not too long later, i started making the matrix
![photo](https://hc-cdn.hel1.your-objectstorage.com/s/v3/ff694ff571b470d64be2720042c7206102594aa2_image.png)

# Day 2 (21.05.2025) ~5hours
Today i finished the key matrix, and researched on how demanding would led matrixes be. due to gpio limitations, i switched to the raspi pico (originally used seeed rp2040 dip)
Afterward i researched a bit on how i can limit the number if gpio pins needed to create a led matrix. however i found no satisfactory one, so i just decided on a screen. But lcd are ugly, i hate the tint, slow speed, and small viewing angles. I found e-ink screens, and decided on using that one. i added it onto the scematics, alongside a handful of led.

After that i placed most of the keys, only leaving the top row (known as the f keys). i left the eink display and potentiometer out of the pcb (it will be in an alternate position). I also will add another pico, since the first one has to little gpio pins. (im writing this paragraph the day after)
![keyboard-image](https://hc-cdn.hel1.your-objectstorage.com/s/v3/59ddb4307d9cd69ad2d32918de79ff7188cd0e5d_image.png)




# Day 3 (22.05.25) ~3 hours
Now i have routed and placed everything, it was a big pain in the ass. The routing is ***very*** ugly, but it works, and its all that matters. I have also added the extra pico to the pcb. finally the pcb is finished.
![pain and suffering](https://hc-cdn.hel1.your-objectstorage.com/s/v3/53ba9582493ce6c19e65b22409e8a4f650aa0d3e_image.png)

# Day 4 (23.05.25) ~3 hours
After making a almost complete 3d model for it, i realised the kays are slightly tilted, so i went back and deleted it, and remade it.
![more pain](https://hc-cdn.hel1.your-objectstorage.com/s/v3/f1c365415130eeb4cbb24eef1be747784eb9511a_image.png)

# Day 5 (24.05.25) ~5 hours
Today i made the keyboard in fusion, creating the case, adding the top layer, pasting the pcb, and adding the rest of the parts. I also added 2x rotary encoders, 1x slider, and changed from the eink screen to the ssd1306. The reason? easier coding & wiring and alright contrast. I also decided on a slightly different design, not the classic 75%, but with more keys, with massively different positioning.
![pic](https://hc-cdn.hel1.your-objectstorage.com/s/v3/a2cb3577b6e4d975f5a6bd7d05bdb38c39240afd_image.png)

# Day 6 (25.05.25) ~5 hours
Made an attempt at using qmk configurator, and python. both ended in a loss. Now im setting up QMK, and am reading the docs, and watching videos and reading over templates, while making a draft of my own.
![pic](https://hc-cdn.hel1.your-objectstorage.com/s/v3/582378d6fd97ac85dbc4405e73623e48bd123087_image.png)


# Day 7 (30.06.25) ~10 hours
F me im still doing qmk. Today i coded like 5 version, all of which failed. At first i even created a nicely drawn keyboard, and made 4 layers, but noooo. Got errors till i gave up, and stated deleting problematic things. In times of desperation, i turned to reddit, and after 200 views, im yet to get a response. 
Anyway, after 9 hours of debugging, sorry, **trying to debug** i decided on polishing the cad instead. So while waiting for my answer from reddit or #code, i smoothed out the edges, and fixed tons of small 0.1 mm errors. Note: i will continue working on the firmware, once i make the keyboard, since my matrix is pretty messed up, so even if qmk compiles, im not sure if it'd work correctly.
![look](https://hc-cdn.hel1.your-objectstorage.com/s/v3/a9904bacde1168035b28a8edc0a90c781bc96ad4_image.png)
this is the most simple, cut down version of QMK i now have, and it still doesnt work.
![bs](https://hc-cdn.hel1.your-objectstorage.com/s/v3/d267c7f422cb418605fb514ff471d4f4caf83999_image.png)
And scratch the b10k, i don't have the correct pins necessary.


# BOM
 - ssd1306
 - 84 keys
 - 2x raspi Pico
 - 2x EC11 rotary encoder
 - cad


