// 函数: sub_44f87c
// 地址: 0x44f87c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
var_8:3.b = 0

if ((*(arg2 - 1) != 0 || *(arg2 - 8) != zx.d(*(arg1 + 0x50)))
        && (*(arg2 - 1) != 1 || *(arg2 - 8) != *(arg1 + 0x34))
        && (*(arg2 - 1) != 2 || *(arg2 - 8) != zx.d(*(arg1 + 0x60))))
    int32_t esi_2 = sub_44e490(arg1) - 1
    
    if (esi_2 s>= 0)
        int32_t i_1 = esi_2 + 1
        int32_t edi_1 = 0
        int32_t i
        
        do
            sub_44e4a0(arg1, edi_1)
            
            if (sub_44f87c(arg2) != 0)
                var_8:3.b = 1
                break
            
            edi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
else
    *(arg2 - 0xc) = arg1
    var_8:3.b = 1

return zx.d(var_8:3.b)
