#ifndef __SCANLINE_INCLUDE_H__
#define __SCANLINE_INCLUDE_H__
static const GLchar Yglprg_blit_scanline_f[] =
"    int decim = max(1, int(ceil(lineNumber[1]/lineNumber[0])));\n"
"    float alpha = cos(3.1415*lineNumber[1]/float(decim) * (vTexCoord.y+1.0)/2.0);\n" //Analog ray of CRT looks like a square sine
"    alpha = (1.0 + alpha*alpha)/2.0;\n"
"    fragColor = vec4(fragColor.xyz*alpha, 1.0);\n";
#endif
