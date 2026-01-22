// 函数: sub_43f998
// 地址: 0x43f998
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_44 = ebx
int32_t esi
int32_t var_48 = esi
int32_t edi
int32_t var_4c = edi
int32_t var_2c = 0
char* var_30 = nullptr
int32_t var_28 = 0
int32_t* var_50 = &var_4
int32_t (* var_54)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x10) != 0)
    *(arg1 + 0x10)
else
    int32_t ecx
    *(arg1 + 0x10) = sub_403c38(ecx, 1)
    int32_t* Next_2 = &var_4
    int32_t (* var_10_1)() = j_sub_404188
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    char var_1d_1
    char* esi_1
    
    if (*data_4ac4d0 != 2)
        esi_1 = 2
        var_1d_1 = 5
    else
        esi_1 = 6
        var_1d_1 = 4
    
    int32_t* var_18 = nullptr
    int32_t** i_2
    var_18 = &i_2
    i_2 = &var_18
    int32_t var_20_1 = 0
    int32_t var_24_1 = 0
    uint32_t edi_1 = zx.d(var_1d_1)
    var_2c = 0
    var_30 = esi_1
    EnumPrintersA(var_30, var_2c, edi_1, var_24_1, var_20_1, i_2, var_18)
    struct _EXCEPTION_REGISTRATION_RECORD* arg_4
    
    if (var_18 != 0)
        int32_t var_10_2 = sub_402ea8(var_18)
        Next_2 = &var_4
        int32_t (* ExceptionList_2)(void* arg1, void* arg2) = j_sub_40443c
        ExceptionList_1 = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList_1
        var_18 = &i_2
        i_2 = &var_18
        int32_t* eax_7 = var_18
        var_2c = 0
        var_30 = esi_1
        int32_t eax_9
        int32_t edx_2
        eax_9, edx_2 = EnumPrintersA(var_30, var_2c, edi_1, ExceptionList_2, eax_7, i_2, var_18, 
            ExceptionList_1, ExceptionList_2, Next_2)
        
        if (eax_9 != 0)
            ExceptionList_1 = ExceptionList_2
            
            if (i_2 - 1 s>= 0)
                void* i_1 = i_2
                void* i
                
                do
                    if (var_1d_1 != 4)
                        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_3 = ExceptionList_1
                        Next_2 = ExceptionList_3->Handler
                        char* eax_18
                        eax_18, edx_2 = sub_43efb4(&Next_2)
                        char* ebx_4 = eax_18
                        
                        while (*ebx_4 != 0)
                            Next_2 = ExceptionList_3->Next
                            edx_2.b = 1
                            Next_2 = sub_43f0a4(nullptr, edx_2, sub_43f028+0x48, ebx_4, Next_2)
                            ExceptionList_2 = &var_2c
                            sub_406a30(data_4ac04c, &var_30)
                            char* eax_22 = var_30
                            struct _EXCEPTION_REGISTRATION_RECORD* Next = ExceptionList_3->Next
                            char var_3c_1 = 6
                            char* var_38_1 = ebx_4
                            char var_34_1 = 6
                            sub_40a37c(1, &Next, eax_22, ExceptionList_2)
                            (*(**(arg1 + 0x10) + 0x3c))(arg1)
                            char* eax_26
                            eax_26, edx_2 = sub_43efb4(&Next_2)
                            ebx_4 = eax_26
                        
                        ExceptionList_1 += 0x14
                    else
                        struct _EXCEPTION_REGISTRATION_RECORD* Next_1 = ExceptionList_1->Next
                        Next_2 = Next_1
                        ExceptionList_2 = nullptr
                        edx_2.b = 1
                        int32_t* Next_3
                        int32_t ecx_3
                        Next_3, ecx_3 =
                            sub_43f0a4(nullptr, edx_2, sub_43f028+0x48, ExceptionList_2, Next_2)
                        Next_2 = Next_3
                        sub_404d80(ecx_3, Next_1)
                        (*(**(arg1 + 0x10) + 0x3c))(arg1)
                        ExceptionList_1 += 0xc
                    
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            fsbase->NtTib.ExceptionList = arg1
            __return_addr = &data_43fb79
            return sub_402ec4(ExceptionList_2)
        
        sub_4045c8(arg1, var_4)
        void arg_10
        esp = &arg_10
        fsbase->NtTib.ExceptionList = arg_4
    else
        esp = &arg_4
        fsbase->NtTib.ExceptionList = arg1

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_43fbcd
return sub_404bac(&var_30, 3)
