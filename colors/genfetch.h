const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1B1E25", /* black   */
  [1] = "#bf616a", /* red     */
  [2] = "#a3be8c", /* green   */
  [3] = "#ebcb8b", /* yellow  */
  [4] = "#8fa1b3", /* blue    */
  [5] = "#b48ead", /* magenta */
  [6] = "#96b5b4", /* cyan    */
  [7] = "#c0c5ce", /* white   */

  /* 8 bright colors */
  [8]  = "#65737e",  /* black   */
  [9]  = "#bf616a",  /* red     */
  [10] = "#a3be8c", /* green   */
  [11] = "#ebcb8b", /* yellow  */
  [12] = "#8fa1b3", /* blue    */
  [13] = "#b48ead", /* magenta */
  [14] = "#96b5b4", /* cyan    */
  [15] = "#eff1f5", /* white   */

  /* special colors */
  [256] = "#2b303b", /* background */
  [257] = "#c0c5ce", /* foreground */
  [258] = "#c0c5ce",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
