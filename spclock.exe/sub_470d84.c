// 函数: sub_470d84
// 地址: 0x470d84
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* edi_1 = arg2
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (edi_1 != arg1[0x9a])
    if (edi_1 != 0 && (arg1[7].b & 0x10) == 0)
        if (arg1 == edi_1)
        label_470dde:
            sub_406a30(data_4ac400, &var_8)
            int32_t edx_1
            edx_1.b = 1
            sub_40451c(sub_40ceb0(sub_417654+0x48, edx_1, var_8))
            esp = &var_8
        else
            arg2.b = 1
            
            if (arg1 != sub_46bed0(edi_1, arg2.b))
                goto label_470dde
            
            if ((arg1[7].b & 1) == 0)
                esi.w = 0xffb6
                
                if (sub_403e64(edi_1, esi) == 0)
                    goto label_470dde
    
    arg1[0x9a] = edi_1
    
    if ((arg1[7].b & 1) == 0)
        if (*(arg1 + 0x276) != 0)
            sub_471158(arg1)
        
        esi.w = 0xffaf
        sub_403e64(arg1, esi)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_470e3b
struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
sub_404b88(result)
return result
