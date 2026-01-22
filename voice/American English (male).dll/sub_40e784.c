// 函数: sub_40e784
// 地址: 0x40e784
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t* var_10 = arg1
int32_t eax
eax.w = *arg1
int32_t eax_1
void* ebx_1
int32_t esi_1
eax_1, ebx_1, esi_1 = sub_40e9b0(eax.w, &var_10)

if (eax_1.b == 0)
    return sub_40e930()

eax_1.w = *(ebx_1 + 4)
return (*(*var_10 + 0x1c))(eax_1)
