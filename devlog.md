Made by: @Magic (slack)
total hours - ~3

# Day 1 (19.05.2025) ~1hour
Created a folder for the project, and added symbols & footprints for both xiao and raspi microcontrollers. Watched a couple videos on how to make a key matrix, and not too long later, i started making the matrix

# Day 2 (21.05.2025)
Today i finished the key matrix, and researched on how demanding would led matrixes be. due to gpio limitations, i switched to the raspi pico (originally used seeed rp2040 dip)
Afterward i researched a bit on how i can limit the number if gpio pins needed to create a led matrix. however i found no satisfactory one, so i just decided on a screen. But lcd are ugly, i hate the tint, slow speed, and small viewing angles. I found vfd screens, and decided on using that one. i added it onto the scematics, alongside a handful of led.



# BOM
 - vfd [screen](https://pl.aliexpress.com/item/1005002932421503.html?spm=a2g0o.productlist.main.7.2792218fKhUGaZ&algo_pvid=f9c26ffc-ae3f-48a2-a227-4100e95b4be7&algo_exp_id=f9c26ffc-ae3f-48a2-a227-4100e95b4be7-6&pdp_ext_f=%7B%22order%22%3A%22155%22%2C%22eval%22%3A%221%22%7D&pdp_npi=4%40dis%21PLN%2137.00%2135.04%21%21%219.61%219.10%21%40210390c217478490433577376ed58d%2112000022859299961%21sea%21PL%210%21ABX&curPageLogUid=fXN6sVYQ5Lpk&utparam-url=scene%3Asearch%7Cquery_from%3A)
 - 84 keys
 - raspi Pico
