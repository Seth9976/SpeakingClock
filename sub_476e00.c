// 函数: sub_476e00
// 地址: 0x476e00
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* eax
int32_t* i

for (i = sub_403b40(eax); i != 0; i = sub_403bf4(i))
    void var_208
    sub_403b48(i, &var_208)
    void* var_20c_1 = &var_208
    void var_108
    sub_403b48(arg2, &var_108)
    uint32_t ecx = zx.d(*var_20c_1)
    sub_403508(var_20c_1, &var_108, ecx + 1)
    
    if (ecx == 0xffffffff)
        break

int32_t* result
result.b = i != 0
return result
