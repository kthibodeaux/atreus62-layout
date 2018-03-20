# My Atreus 62 configuration.

## Special
* T and N act as CTRL when held
* R and I act as ALT when held
* A and O act as L_SFT when held
* E activates a tmux layer when held
* Space tap dances to _

## Building

To build it you will need [qmk_firmware][qmk] checked out and this repo checked
out to something like `keyboards/atreus62/keymaps/kthibodeaux`.

 [qmk]: https://github.com/jackhumbert/qmk_firmware

```
$ git clone https://github.com/jackhumbert/qmk_firmware.git
$ cd qmk_firmware
$ git clone git@github.com:kthibodeaux/atreus62-layout.git \
            keyboards/atreus62/keymaps/kthibodeaux
$ make KEYBOARD=atreus62 KEYMAP=kthibodeaux
```
