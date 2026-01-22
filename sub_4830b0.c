// 函数: sub_4830b0
// 地址: 0x4830b0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_118 = ebx
int32_t esi
int32_t var_11c = esi
int32_t edi
int32_t var_120 = edi
int32_t var_114 = 0
LPARAM lParam = arg3
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg2
void** ebx_1 = arg1
int32_t* var_124 = &var_4
int32_t (* var_128)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (lParam s> arg4)
    void var_110
    sub_403b48(*ebx_1, &var_110)
    void* var_10 = &var_110
    char var_c_1 = 4
    void** var_130_1 = &var_10
    sub_406a30(data_4ac130, &var_114)
    int32_t edx_2
    edx_2.b = 1
    int64_t** eax_2
    eax_2, ebx_1, ebp_1, lParam = sub_40ceec(sub_417654+0x48, edx_2, var_114, 0)
    esp = &ExceptionList
    sub_40451c(eax_2)

if (lParam s> ebp_1[-1])
    ebp_1[-1] = lParam

if (arg4 s< ebp_1[-1])
    ebp_1[-1] = arg4

int32_t eax_4
eax_4.b = arg4 - lParam s> 0x2710
int32_t edx_4
edx_4.b = ebx_1[0x9a] - ebx_1[0x99] s> 0x2710

if (eax_4.b != edx_4.b)
    ebx_1[0x99] = lParam
    ebx_1[0x9a] = arg4
    sub_45c168(ebx_1)

if (lParam != ebx_1[0x99])
    ebx_1[0x99] = lParam
    
    if (sub_45fc28(ebx_1) != 0)
        SendMessageA(sub_45f888(ebx_1), 0x407, 1, lParam)
        esp = &ExceptionList

if (arg4 != ebx_1[0x9a])
    ebx_1[0x9a] = arg4
    
    if (sub_45fc28(ebx_1) != 0)
        SendMessageA(sub_45f888(ebx_1), 0x408, 1, arg4)
        esp = &ExceptionList

if (ebx_1[0x9c] != ebp_1[-1])
    ebx_1[0x9c] = ebp_1[-1]
    
    if (sub_45fc28(ebx_1) != 0)
        SendMessageA(sub_45f888(ebx_1), 0x405, 1, ebp_1[-1])
    
    lParam.w = 0xffb0
    sub_403e64(ebx_1, lParam)
    esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_48322d
sub_404b88(&ebp_1[-0x44])
return &ebp_1[-0x44]
