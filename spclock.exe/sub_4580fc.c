// 函数: sub_4580fc
// 地址: 0x4580fc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2[2] != 0 && *(arg2[2] + 0x1db) != 0)
    GetWindowRect(sub_45f888(arg2[2]), &arg2[0x13])
    void* result = arg2[2]
    
    if (*(result + 0x1db) == 0 || *(result + 0x1b0) == 0)
        return result
    
    arg2[0x18]
    arg2[0x10]
    return (*(**(result + 0x1b0) + 0x24))(&arg2[0x13], zx.d(arg2[0x17].b))

int32_t eax_3 = sub_457778(arg2[0x10])
int32_t eax_5 = sub_457764(arg2[0x10])
double var_24_1 = fconvert.d(float.t(arg2[4]) - float.t(eax_3) * fconvert.t(*(arg2 + 0x28)))
double var_1c_1 = fconvert.d(float.t(arg2[5]) - float.t(eax_5) * fconvert.t(*(arg2 + 0x30)))
arg2[0x13] = sub_403370(fconvert.t(var_24_1))
arg2[0x14] = sub_403370(fconvert.t(var_1c_1))
arg2[0x15] = eax_3 + arg2[0x13]
arg2[0x16] = eax_5 + arg2[0x14]
return (*(*arg2 + 0x2c))(var_24_1, var_1c_1, eax_5)
