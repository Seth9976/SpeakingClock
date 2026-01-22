// 函数: sub_4291fc
// 地址: 0x4291fc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
enum REG_VALUE_TYPE type = REG_NONE
PSTR lpValueName = sub_405018(arg2)
void lpcbData
enum WIN32_ERROR eax_2
int32_t edx
eax_2, edx = RegQueryValueExA(*(arg1 + 4), lpValueName, nullptr, &type, arg3, &lpcbData)

if (eax_2 != NO_ERROR)
    int32_t var_10 = arg2
    char var_c_1 = 0xb
    edx.b = 1
    int32_t eax_3
    eax_3, ebp_1 = sub_40cfa8(sub_42891c+0x48, edx, data_4ac4ec, 0, &var_10)
    sub_40451c(eax_3)

int32_t result = ebp_1[3]
*ebp_1[2] = sub_428a50(ebp_1[-1])
*ebp_1
return result
