// 函数: sub_45fd4c
// 地址: 0x45fd4c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t (* ebp)(void* arg1, void* arg2)
int32_t (* var_4)(void* arg1, void* arg2) = ebp
int32_t ebx
int32_t var_1c = ebx
int32_t esi
int32_t var_20 = esi
int32_t edi
int32_t var_24 = edi
char var_9 = arg3.b
int32_t edi_1 = arg2
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = arg1
int32_t* var_10 = nullptr
arg2.b = 1
int32_t* eax_1 = sub_403c38(arg3, arg2)
__return_addr = &var_4
var_4 = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
esi.w = 0xffb2
sub_403e64(ExceptionList, esi, eax_1)

if (eax_1[2] s> 0)
    int32_t var_14_1 = sub_41a150(eax_1, edi_1)
    
    if (var_14_1 == 0xffffffff)
        if (var_9 == 0)
            var_14_1 = 0
        else
            var_14_1 = eax_1[2] - 1
    
    int32_t ebx_1 = var_14_1
    
    do
        if (var_9 == 0)
            if (ebx_1 == 0)
                ebx_1 = eax_1[2]
            
            ebx_1 -= 1
        else
            ebx_1 += 1
            
            if (ebx_1 == eax_1[2])
                ebx_1 = 0
        
        int32_t* eax_12 = sub_41a0f4(eax_1, ebx_1)
        esi.w = 0xffb6
        
        if (sub_403e64(eax_12, esi) != 0 && (arg5 == 0 || eax_12[0x76].b != 0)
                && (arg4 == 0 || eax_12[0xc] == ExceptionList))
            var_10 = eax_12
        
        if (var_10 != 0)
            break
    while (ebx_1 != var_14_1)

fsbase->NtTib.ExceptionList = ExceptionList
__return_addr = sub_45fe49
return sub_403c68(eax_1)
