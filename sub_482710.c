// 函数: sub_482710
// 地址: 0x482710
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax = *(arg2 + 8)
int32_t lParam = sx.d(eax.w)
int32_t var_14 = sx.d(eax:2.w)
LRESULT result = SendMessageA(sub_45f888(arg1), 0x130d, 0, &lParam)
LRESULT result_1 = result

if (result_1 s>= 0)
    result = sub_480e98(arg1)
    
    if (result_1 != result)
        *(arg2 + 0xc) = 1

return result
