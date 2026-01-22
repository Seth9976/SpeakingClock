// 函数: sub_429194
// 地址: 0x429194
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
enum REG_VALUE_TYPE dwType = sub_428a20(arg4)
PSTR lpValueName = sub_405018(arg2)
enum WIN32_ERROR result
int32_t edx
result, edx = RegSetValueExA(*(arg3 + 4), lpValueName, 0, dwType, arg1, arg5)

if (result != NO_ERROR)
    int32_t var_10 = arg2
    char var_c_1 = 0xb
    edx.b = 1
    int32_t eax_5
    eax_5, ebp_1 = sub_40cfa8(sub_42891c+0x48, edx, data_4ac260, 0, &var_10)
    result = sub_40451c(eax_5)

*ebp_1
return result
