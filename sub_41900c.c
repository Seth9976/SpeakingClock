// 函数: sub_41900c
// 地址: 0x41900c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404074(arg1, arg2)
DeleteCriticalSection(&arg1[2])
void* eax_1 = arg1[1]

if (eax_1 != 0)
    int32_t esi_2 = *(eax_1 + 8) - 1
    
    if (esi_2 s>= 0)
        int32_t i_1 = esi_2 + 1
        int32_t edi_1 = 0
        int32_t i
        
        do
            sub_403c68(sub_41a0f4(arg1[1], edi_1))
            edi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)

int32_t edx_1
edx_1.b = arg2.b & 0xfc
int32_t result = sub_403c58(sub_403c68(arg1[1]), edx_1)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
