// 函数: sub_45a094
// 地址: 0x45a094
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_48 = *arg2
int32_t var_44 = arg2[1]
int32_t result = 0
int32_t esi_3 = *(arg1 + 0x48)
int32_t edi_2 = *(arg1 + 0x4c)

if (var_48 s<= 0)
    result.b = 3
else if (esi_3 s> var_48)
    int32_t edx = var_44
    
    if (edx s<= 0)
        result.b = 1
    else if (edi_2 s> edx)
        double var_3c = fconvert.d(float.t(var_48))
        double var_34_1 = fconvert.d(float.t(esi_3 - var_48))
        double var_2c_1 = fconvert.d(float.t(edx))
        double var_24_1 = fconvert.d(float.t(edi_2 - edx))
        int32_t eax_2 = sub_45a058(&var_3c, 3)
        
        if (eax_2 u< 1)
            result.b = 3
        else if (eax_2 == 1)
            result.b = 4
        else if (eax_2 == 2)
            result.b = 1
        else if (eax_2 == 3)
            result.b = 2
    else
        result.b = 2
else
    result.b = 4

return result
