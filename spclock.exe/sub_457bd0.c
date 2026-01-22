// 函数: sub_457bd0
// 地址: 0x457bd0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_5 = 1
int32_t* edi = *(*(*(arg1 - 4) + 0x30) + 0x1cc)
int32_t i = sub_41a150(edi, *(arg1 - 4))

while (i s> 0)
    i -= 1
    void* eax_7 = sub_41a0f4(edi, i)
    
    if (*(eax_7 + 0x57) != 0 && (*(eax_7 + 0x50) & 0x40) != 0)
        void lprcSrc2
        sub_4570f0(eax_7, &lprcSrc2)
        RECT var_15
        IntersectRect(&var_15, arg1 - 0x14, &lprcSrc2)
        
        if (EqualRect(&var_15, arg1 - 0x14) != 0)
            return zx.d(var_5)

return 0
