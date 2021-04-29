/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0d120d", /* black   */
  [1] = "#161c16", /* red     */
  [2] = "#252e25", /* green   */
  [3] = "#3a473a", /* yellow  */
  [4] = "#556755", /* blue    */
  [5] = "#768d75", /* magenta */
  [6] = "#9bba9b", /* cyan    */
  [7] = "#cdeacd", /* white   */

  /* 8 bright colors */
  [8]  = "#bba157", /* black   */
  [9]  = "#ddb8dd", /* red     */
  [10] = "#eb8f97", /* green   */
  [11] = "#eeb3ef", /* yellow  */
  [12] = "#d28fd3", /* blue    */
  [13] = "#75a7a4", /* magenta */
  [14] = "#e6c97c", /* cyan    */
  [15] = "#e7b8bc", /* white   */

  /* special colors */
  [256] = "#070a07", /* background */
  [257] = "#badeb9", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
unsigned int defaultfg  = 257;
unsigned int defaultbg  = 256;
unsigned int defaultcs  = 257;
unsigned int defaultrcs = 257;



