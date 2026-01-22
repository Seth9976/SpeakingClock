// 函数: sub_468e20
// 地址: 0x468e20
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_14 = ecx
var_14.b = arg2
uint32_t result = zx.d(*(arg1 + 0x58))

if (result.b != var_14.b)
    var_14:1.b = result.b
    result = zx.d(var_14.b)
    *(arg1 + 0x58) = result.b
    
    if (result.b != 1)
        result = *(arg1 + 0x30)
        int32_t esi_2 = *(result + 8) - 1
        
        if (esi_2 s>= 0)
            int32_t i_1 = esi_2 + 1
            int32_t ebp_1 = 0
            int32_t i
            
            do
                int32_t* edi_1 = *(*(*(arg1 + 0x30) + 4) + (ebp_1 << 2))
                result = zx.d(var_14.b)
                char temp0_1 = result.b
                result.b -= 1
                
                if (temp0_1 u< 1)
                    if (edi_1 != 0 && var_14:1.b == 2)
                        sub_469278(edi_1, edi_1[0x25].b)
                    
                    result = (*(*edi_1 + 0x44))(var_14)
                else
                    char temp1_1 = result.b
                    result.b -= 1
                    
                    if (temp1_1 == 1 && edi_1 != 0 && var_14.b == 2)
                        edi_1[0x25].b = *(edi_1 + 0x6a)
                        result = sub_469278(edi_1, 1)
                
                ebp_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (*(arg1 + 0x62) != 0)
            *(arg1 + 0x64)
            return (*(arg1 + 0x60))(var_14)

return result
