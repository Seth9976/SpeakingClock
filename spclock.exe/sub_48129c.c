// 函数: sub_48129c
// 地址: 0x48129c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_114 = ebx
int32_t var_110 = 0
void** ebx_1 = arg1
int32_t* var_118 = &var_4
int32_t (* var_11c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != ebx_1[0x9d].w)
    if (arg2 s< 0)
        void var_10c
        sub_403b48(*ebx_1, &var_10c)
        void* var_c = &var_10c
        char var_8 = 4
        void** var_124_1 = &var_c
        sub_406a30(data_4ac130, &var_110)
        int32_t edx_2
        edx_2.b = 1
        int64_t** eax_2
        eax_2, ebx_1, ebp_1 = sub_40ceec(sub_417654+0x48, edx_2, var_110, 0)
        esp = &var_8
        arg2 = sub_40451c(eax_2)
    
    ebx_1[0x9d].w = arg2
    
    if (ebx_1[0x9d].w == 0 || arg2 == 0)
        sub_45c168(ebx_1)
    else
        sub_4813a0(ebx_1)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_48135b
sub_404b88(&ebp_1[-0x43])
return &ebp_1[-0x43]
