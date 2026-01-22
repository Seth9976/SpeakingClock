// 函数: sub_40e700
// 地址: 0x40e700
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_14 = ecx
int32_t ecx_1 = sub_404074(arg1, arg2)
var_14.b = arg2.b

for (int32_t i = 0; i != 0x10; i += 1)
    int32_t* j = arg1[i + 1]
    arg1[i + 1] = 0
    
    while (j != 0)
        int32_t* j_1 = j
        j = *j
        ecx_1 = sub_402ec4(j_1)

uint32_t edx
edx.b = var_14.b & 0xfc
int32_t result = sub_403c58(ecx_1, edx)

if (var_14.b s<= 0)
    return result

return sub_40401c(arg1)
