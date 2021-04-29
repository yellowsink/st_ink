/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1c1614", /* black   */
  [1] = "#251f1c", /* red     */
  [2] = "#38302b", /* green   */
  [3] = "#524741", /* yellow  */
  [4] = "#73645c", /* blue    */
  [5] = "#9a867c", /* magenta */
  [6] = "#c7afa2", /* cyan    */
  [7] = "#e8e1de", /* white   */

  /* 8 bright colors */
  [8]  = "#d56aa2", /* black   */
  [9]  = "#ca926b", /* red     */
  [10] = "#a5b96a", /* green   */
  [11] = "#d176a5", /* yellow  */
  [12] = "#cd82a7", /* blue    */
  [13] = "#bba2e6", /* magenta */
  [14] = "#598e9f", /* cyan    */
  [15] = "#50967e", /* white   */

  /* special colors */
  [256] = "#110d0b", /* background */
  [257] = "#d7c9c2", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
unsigned int defaultfg  = 257;
unsigned int defaultbg  = 256;
unsigned int defaultcs  = 257;
unsigned int defaultrcs = 257;
