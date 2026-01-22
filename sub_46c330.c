// 函数: sub_46c330
// 地址: 0x46c330
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char ecx
char var_a = ecx
char edx
char var_9 = edx
int32_t eax_3
void* ecx_1
void* edx_1
eax_3, ecx_1, edx_1 = GetWindowLongA(sub_45f888(*(arg1 + 4)), 0xfffffff0)
eax_3.b = (eax_3 & 0x840000) != 0
int32_t var_10 = eax_3 & 0x7f
int32_t __saved_ebp

if (*(arg1 + 0x18) == 1)
    int32_t* var_18 = &__saved_ebp
    edx_1.w = 0x15
    return sub_46c2b4(0, edx_1, ecx_1) + sub_457190(*(arg1 + 4))

int32_t* var_18_1 = &__saved_ebp
edx_1.w = 0x14
void* eax_5
eax_5.w = 1
return sub_46c2b4(eax_5.w, edx_1, ecx_1) + sub_45714c(*(arg1 + 4))
