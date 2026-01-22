// 函数: sub_485d54
// 地址: 0x485d54
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_c = ecx
var_c.b = 1
int32_t ebx = 0

if ((*(arg1 + 0x260) s>= *(arg1 + 0x258) || *(arg1 + 0x262) s>= 0)
        && (*(arg1 + 0x260) s<= *(arg1 + 0x25a) || *(arg1 + 0x262) s<= 0))
    int16_t eax_2 = *(arg1 + 0x262)
    
    if (eax_2 s< 0)
        ebx.b = 2
    else if (eax_2 s> 0)
        ebx.b = 1
else
    ebx = 0

if (*(arg1 + 0x27a) != 0)
    *(arg1 + 0x27c)
    (*(arg1 + 0x278))(var_c)

if (*(arg1 + 0x282) != 0)
    *(arg1 + 0x284)
    (*(arg1 + 0x280))(ebx, zx.d(*(arg1 + 0x260)))

return 1
