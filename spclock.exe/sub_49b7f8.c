// 函数: sub_49b7f8
// 地址: 0x49b7f8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_28[0x4]

if (sub_49abcc(arg1) != 0)
    (*(*arg1 + 0x44))(&var_28, 1)
    void var_18
    void* var_34_1 = &var_18
    void* eax_4 = (*(*arg1 + 0x148))(var_34_1)
    return sub_49681c(var_34_1, arg1[0x94], eax_4)

int32_t esi
esi.w = 0xffb3
char result = sub_403e64(arg1, esi)

if (result != 0 || *(arg1 + 0x262) == 0 || arg1[0x98].b != 0)
    return result

if (*((*(*arg1 + 0x148))() + 0x30) == 3)
    return sub_49a650(arg1)

int32_t eax_11 = *((*(*arg1 + 0x148))() + 0x24)
sub_418a64(arg1[0x12], 0, 0, &var_28, eax_11)
sub_49a448(arg1, &var_28)
int32_t eax_16 = *((*(*arg1 + 0x148))(&var_28, arg1[0x13]) + 0x24)
sub_418a64(eax_16, *((*(*arg1 + 0x148))(eax_16) + 0x24), 0)
sub_49a448(arg1, &var_28)
void* eax_22 = (*(*arg1 + 0x148))(&var_28, arg1[0x13])
int32_t edx_13 = arg1[0x13] - *(eax_22 + 0x28) - 1
int32_t eax_25 = *((*(*arg1 + 0x148))(edx_13) + 0x24)
sub_418a64(arg1[0x12], edx_13, eax_25)
sub_49a448(arg1, &var_28)
void* eax_28 = (*(*arg1 + 0x148))()
int32_t eax_31 = *((*(*arg1 + 0x148))(&var_28, arg1[0x13] - *(eax_28 + 0x28)) + 0x24)
int32_t var_38_1 = *((*(*arg1 + 0x148))(eax_31) + 0x28)
sub_418a64(arg1[0x12], eax_31, arg1[0x12] - var_38_1)
return sub_49a448(arg1, &var_28)
