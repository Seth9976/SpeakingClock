// 函数: sub_470a1f
// 地址: 0x470a1f
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg4 + 0x44) += arg3
void var_1
void* var_5 = &var_1
*arg1 += arg1.b
*(arg4 - 0x74) += arg2.b
int32_t eflags
arg1.b = __in_al_dx(arg2.w, eflags)
int32_t entry_ebx
int32_t var_bd = entry_ebx + 1
int32_t var_c1 = arg5 - 1
int32_t edi
int32_t var_c5 = edi
*(arg4 - 0xb3) = 0
void* var_c9 = arg4 + 1
int32_t (* var_cd)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[0x277] != 1 || (arg1[0x1c] & 0x10) != 0)
    __builtin_memcpy(arg4 - 0xaf, arg2, 0x8c)
    *(arg4 - 0xa7) &= 0xfff7ffff
    sub_45bc7c(arg1, arg4 - 0xaf)
    arg1[0x358] &= 0xef
else
    void* eax_1 = *(data_4b1ce0 + 0x44)
    
    if (eax_1 == 0 || *(eax_1 + 0x29c) == 0)
        sub_406a30(data_4ac3d0, arg4 - 0xb3)
        int32_t edx_1
        edx_1.b = 1
        arg2 = sub_40451c(sub_40ceb0(sub_417654+0x48, edx_1, *(arg4 - 0xb3)))
        void var_8
        esp_1 = &var_8
    
    *(arg4 - 0x23) = &arg2[0x13]
    *(arg4 - 0x1f) = *arg2
    *(arg4 - 0x1b) = data_4af7f4
    *(arg4 - 0x17) = arg2[3]
    *(arg4 - 0x13) = arg2[4]
    *(arg4 - 0xf) = arg2[5]
    *(arg4 - 0xb) = arg2[6]
    *(arg4 - 7) = arg2[1]
    *(arg4 - 3) = arg2[8]
    *(esp_1 - 4) = arg4 - 0x23
    *(esp_1 - 8) = 0
    *(esp_1 - 0xc) = 0x220
    *(esp_1 - 0x10) = *(*(data_4b1ce0 + 0x44) + 0x29c)
    *(arg1 + 0x1b4) = SendMessageA()
    arg1[0x358] |= 0x10

sub_473754(arg1)
esp_1[2]
fsbase->NtTib.ExceptionList = *esp_1
esp_1[2] = sub_470b5c
sub_404b88(arg4 - 0xb3)
return arg4 - 0xb3
