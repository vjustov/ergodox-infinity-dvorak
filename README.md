# Programmers Dvorak for the Ergodox Infinity

This is the layout i use for my keyboard, i have taken bits from here and there.

### Layout.png and the json file are outdated, see the kll instead.

## Installation

Due to the complexities of this layout i have moved away from the I:C configurator and I'm using the [controller](https://github.com/kiibohd/controller/) directly.

You can follow the instructions [here](https://github.com/kiibohd/controller/tree/master/Keyboards#example-usage-with-web-configurator-layout-files) but you have to change a few things. Replace the whole configuration part of the ergodox-l.bash file with this (dont forget to change the sides)

```
#################
# Configuration #
#################


# Feel free to change the variables in this section to configure your keyboard

BuildPath="programmers_dvorak_ergodox-L"

## KLL Configuration ##

# Generally shouldn't be changed, this will affect every layer
BaseMap="scancode_map leftHand slave1 rightHand"

# This is the default layer of the keyboard
# NOTE: To combine kll files into a single layout, separate them by spaces
# e.g.  DefaultMap="mylayout mylayoutmod"
DefaultMap="programmers_dvorak_ergodox/MDErgo1-Default-0 infinity_ergodox/lcdFuncMap"

# This is where you set the additional layers
# NOTE: Indexing starts at 1
# NOTE: Each new layer is another array entry
# e.g.  PartialMaps[1]="layer1 layer1mod"
#       PartialMaps[2]="layer2"
#       PartialMaps[3]="layer3"
PartialMaps[1]="programmers_dvorak_ergodox/MDErgo1-Default-1 infinity_ergodox/lcdFuncMap"
PartialMaps[2]="programmers_dvorak_ergodox/MDErgo1-Default-2 infinity_ergodox/lcdFuncMap"

```

## Changelog

The format is based on [Keep a Changelog](http://keepachangelog.com/en/1.0.0/)
and this project adheres to [Semantic Versioning](http://semver.org/spec/v2.0.0.html).

## [0.1.0] - 2017-06-20
### Changed
- Moved the numbers to the Layer 2.
- Layer one number rows are symbols from the original programmers dvorak.

