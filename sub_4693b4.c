// 函数: sub_4693b4
// 地址: 0x4693b4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_10 = ecx
int32_t result = sub_404fb0(arg2, arg1[0x1f])
bool z

if (z)
    return result

int32_t esi_2 = *(arg1[0x14] + 8) - 1

if (esi_2 s>= 0)
    int32_t i_1 = esi_2 + 1
    int32_t edi_1 = 0
    int32_t i
    
    do
        int32_t* eax_4 = *(*(arg1[0x14] + 4) + (edi_1 << 2))
        sub_403e18(eax_4, 0x468820)
        
        if (eax_4 != 0)
            (*(*eax_4 + 0x68))(arg2)
        
        edi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_404bdc(&arg1[0x1f], arg2)
return (*(*arg1 + 0x30))(arg2)
