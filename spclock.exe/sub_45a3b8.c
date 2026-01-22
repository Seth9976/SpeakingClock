// 函数: sub_45a3b8
// 地址: 0x45a3b8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_20 = ebx
int32_t esi
int32_t var_24 = esi
int32_t var_1c = 0
int32_t var_18 = 0
int32_t esi_1 = arg3
int32_t var_c = arg2
int32_t* ebx_1 = arg4
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (esi_1 == 0)
    esi_1 = *(arg1 + 0x30)

if (esi_1 == 0)
    int32_t var_14 = *(arg1 + 8)
    char var_10_1 = 0xb
    int32_t* var_34_1 = &var_14
    sub_406a30(data_4ac348, &var_18)
    int32_t edx_1
    edx_1.b = 1
    int64_t** eax_4
    eax_4, ebx_1, ebp_1, esi_1 = sub_40ceec(sub_417654+0x48, edx_1, var_18, 0)
    sub_40451c(eax_4)

int32_t* eax_5 = ebp_1[-2]
*ebx_1 = *eax_5
ebx_1[1] = eax_5[1]
*ebx_1 += *(ebp_1[-1] + 0x40)
ebx_1[1] += *(ebp_1[-1] + 0x44)
void* i

for (i = *(ebp_1[-1] + 0x30); i != 0; i = *(i + 0x30))
    if (esi_1 == i)
        break
    
    if (*(i + 0x30) != 0)
        *ebx_1 += *(i + 0x40)
        ebx_1[1] += *(i + 0x44)

if (i == 0)
    ebp_1[-4] = *(ebp_1[-1] + 8)
    ebp_1[-3].b = 0xb
    void* var_34_2 = &ebp_1[-4]
    sub_406a30(data_4ac1a4, &ebp_1[-6])
    int32_t edx_7
    edx_7.b = 1
    int64_t** eax_15
    eax_15, ebp_1 = sub_40ceec(sub_417654+0x48, edx_7, ebp_1[-6], 0)
    sub_40451c(eax_15)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_28_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_45a4bf
return sub_404bac(&ebp_1[-6], 2)
