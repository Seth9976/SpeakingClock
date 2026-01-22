// 函数: sub_4981d8
// 地址: 0x4981d8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_14 = ecx
void* edi = arg1
var_14.b = 0

if (edi != 0 && edi != 0)
    int32_t esi_2 = sub_423974(edi) - 1
    
    if (esi_2 s>= 0)
        int32_t i_1 = esi_2 + 1
        int32_t ebx_1 = 0
        int32_t i
        
        do
            if (sub_403df4(sub_423948(edi, ebx_1), 0x4529a0) == 0)
                char eax_7
                eax_7, edi = sub_498100(sub_423948(edi, ebx_1), 0x498244, arg2)
                
                if (eax_7 != 0)
                    var_14.b = 1
                    break
            
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)

return zx.d(var_14.b)
