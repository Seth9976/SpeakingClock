// 函数: sub_423380
// 地址: 0x423380
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_c = ecx
sub_404074(arg1, arg2)
var_c.b = arg2.b
sub_4235e8(arg1)

if (arg1[5] != 0)
    while (true)
        int32_t* esi_2 = arg1[5]
        
        if (esi_2 == 0)
            break
        
        if (esi_2[2] s<= 0)
            break
        
        int32_t* eax_2
        int32_t ecx_1
        eax_2, ecx_1 = sub_41a0f4(esi_2, esi_2[2] - 1)
        ecx_1.b = 1
        (*(*eax_2 + 0x10))(var_c)
    
    sub_40eb14(&arg1[5])

sub_42358c(arg1)
int32_t* eax_5 = arg1[1]

if (eax_5 != 0)
    sub_423554(eax_5, arg1)

uint32_t edx_4
edx_4.b = var_c.b & 0xfc
int32_t result = sub_41a6e0(arg1, edx_4)

if (var_c.b s<= 0)
    return result

return sub_40401c(arg1)
