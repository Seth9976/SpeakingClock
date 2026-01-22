// 函数: sub_412e70
// 地址: 0x412e70
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* var_20
uint32_t result
int32_t esi_1
result, esi_1 = sub_415ce4(*arg1, &var_20)

if (result.b != 0)
    VARIANT pvarg
    VariantInit(&pvarg)
    (*(*var_20 + 0x1c))(7)
    *arg2 = pvarg...__offset(0x8).d
    arg2[1] = pvarg...__offset(0xc).d

return result
