Made by: @Magic (slack)
total hours - ~3

# Day 1 (19.05.2025) ~1hour
Created a folder for the project, and added symbols & footprints for both xiao and raspi microcontrollers. Watched a couple videos on how to make a key matrix, and not too long later, i started making the matrix

# Day 2 (21.05.2025) ~5hours
Today i finished the key matrix, and researched on how demanding would led matrixes be. due to gpio limitations, i switched to the raspi pico (originally used seeed rp2040 dip)
Afterward i researched a bit on how i can limit the number if gpio pins needed to create a led matrix. however i found no satisfactory one, so i just decided on a screen. But lcd are ugly, i hate the tint, slow speed, and small viewing angles. I found e-ink screens, and decided on using that one. i added it onto the scematics, alongside a handful of led.

After that i placed most of the keys, only leaving the top row (known as the f keys). i left the eink display and potentiometer out of the pcb (it will be in an alternate position). I also will add another pico, since the first one has to little gpio pins. (im writing this paragraph the day after)
![keyboard-image](https://hc-cdn.hel1.your-objectstorage.com/s/v3/59ddb4307d9cd69ad2d32918de79ff7188cd0e5d_image.png)




# Day 3 ~3 hours
Now i have routed and placed everything, it was a big pain in the ass. The routing is ***very*** ugly, but it works, and its all that matters. I have also added the extra pico to the pcb. finally the pcb is finished.
![pain and suffering](https://hc-cdn.hel1.your-objectstorage.com/s/v3/53ba9582493ce6c19e65b22409e8a4f650aa0d3e_image.png)






# BOM
 - e-ink [screen](https://pl.aliexpress.com/item/1005004089460021.html?spm=a2g0o.detail.0.0.41491vTa1vTaJz&productId=1005004089460021&pdp_ext_f=%7B%22tabScene%22%3A%22retail%22%2C%22sku_id%22%3A12000027996230135%2C%22origProductId%22%3A%221005004089460021%22%7D&#nav-specification)
 - 84 keys
 - raspi Pico
