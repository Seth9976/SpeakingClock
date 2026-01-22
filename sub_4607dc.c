// 函数: sub_4607dc
// 地址: 0x4607dc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

(*(*arg1 - 0x10))()
RECT* lprc = *(arg2 + 8)
int32_t eax_2 = neg.d(arg1[0x67])
arg1[0x67]
BOOL result = InflateRect(lprc, eax_2, eax_2)

if (*(arg1 + 0x195) != 0)
    result = 0
    
    if (*(arg1 + 0x193) != 0)
        result = arg1[0x66]
    
    if (arg1[0x65].b != 0)
        result += arg1[0x66]
    
    if ((*(arg1 + 0x192) & 1) != 0)
        lprc->left += result
    
    if ((*(arg1 + 0x192) & 2) != 0)
        lprc->top += result
    
    if ((*(arg1 + 0x192) & 4) != 0)
        lprc->right -= result
    
    if ((*(arg1 + 0x192) & 8) != 0)
        lprc->bottom -= result

return result
