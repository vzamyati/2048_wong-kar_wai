# 2048-rushes-wong_kar_wai

# DESCRIPTION

Educational project in School 42 (UNIT Factory Kyiv).
Task: Write replication of the game 2048 in the C language for 48 hours. We with [apakhomo](https://gitlab.com/omentes/) ended for 13 hours.

The game is written in C language with the use of the library ncurses.

## GAME DESCRIPTION

2048 is played on a simple gray 4 x 4 grid, with numbered tiles that slide smoothly when a player moves them using the four arrow keys. Every turn, a new tile will randomly appear in an empty spot on the board with a value of either 2 or 4.

### Examples

COL1 | COL2 | COL3 | COL4
--- | --- | --- | ---
2 | 0 | 0 | 0 |
2 | 0 | 0 | 0 |
0 | 0 | 0 | 0 |
4 | 0 | 0 | 0 |

Press `KEY_DOWN`

COL1 | COL2 | COL3 | COL4
--- | --- | --- | ---
0 | 2 | 0 | 0 |
0 | 0 | 0 | 0 |
4 | 0 | 0 | 0 |
4 | 0 | 0 | 0 |

Press `KEY_DOWN`

COL1 | COL2 | COL3 | COL4
--- | --- | --- | ---
0 | 0 | 0 | 2 |
0 | 0 | 0 | 0 |
0 | 0 | 0 | 0 |
8 | 2 | 0 | 0 |

## INSTALL

```
git clone https://gitlab.com/omentes/2048-rushes-wong_kar_wai
cd 2048-rushes-wong_kar_wai
make
```
<img src="https://github.com/vzamyati/2048_wong-kar_wai/blob/master/pictures/Screen%20Shot%202018-07-23%20at%203.15.57%20PM.png?raw=true" width="400" height="400" /> <img src="https://github.com/vzamyati/2048_wong-kar_wai/blob/master/pictures/Screen%20Shot%202018-07-23%20at%203.27.12%20PM.png?raw=true" width="400" height="400" />
<img src="https://github.com/vzamyati/2048_wong-kar_wai/blob/master/pictures/Screen%20Shot%202018-07-23%20at%203.17.45%20PM.png?raw=true" width="400" height="400" /> <img src="https://github.com/vzamyati/2048_wong-kar_wai/blob/master/pictures/Screen%20Shot%202018-07-23%20at%203.28.18%20PM.png?raw=true" width="400" height="400" />
<img src="https://github.com/vzamyati/2048_wong-kar_wai/blob/master/pictures/Screen%20Shot%202018-07-23%20at%203.19.46%20PM.png?raw=true" width="400" height="400" />
## Built With


* [Ncurses](https://www.gnu.org/software/ncurses/) - ncurses (new curses) is a programming library providing an application programming interface (API) that allows the programmer to write text-based user interfaces in a terminal-independent manner. It is a toolkit for developing "GUI-like" application software that runs under a terminal emulator. It also optimizes screen changes, in order to reduce the latency experienced when using remote shells.
```
apt-get install ncurses-dev
```

## Authors

*  **Valeriia Zamyatina** - [vzamyati](https://github.com/vzamyati/)
*  **Artem Pakhomov** - [apakhomo](https://gitlab.com/omentes/)

