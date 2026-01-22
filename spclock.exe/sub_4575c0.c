// 函数: sub_4575c0
// 地址: 0x4575c0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
char* var_c = nullptr
char* var_8 = arg2
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if ((arg1[0x14].b & 0x20) == 0)
    ebx = 0
else
    char temp0_1 = arg1[7].b & 1
    
    if (temp0_1 != 0)
        ebx = 0
    else
        sub_4577d8(0, &var_c)
        sub_404fb0(arg1[2], var_c)
        
        if (temp0_1 != 0)
            ebx = 0
        else
            int32_t* esi_1 = arg1[1]
            char eax_3
            
            if (esi_1 != 0)
                eax_3 = sub_403df4(esi_1, 0x4529a0)
            
            if (esi_1 == 0 || eax_3 == 0 || (esi_1[7].b & 1) == 0)
                ebx.b = 1
            else
                ebx = 0

sub_4238a4(arg1, var_8)

if (ebx.b != 0)
    ebp_1 = sub_457808(arg1, var_8)
    esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_45765d
sub_404b88(&ebp_1[-2])
return &ebp_1[-2]
