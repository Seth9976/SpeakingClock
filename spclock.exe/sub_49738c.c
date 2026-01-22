// 函数: sub_49738c
// 地址: 0x49738c
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
int32_t var_10 = 0
int32_t* ebx_1 = arg1
int32_t* var_124 = &var_4
int32_t (* var_128)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (sub_403df4(arg2, sub_403b40(ebx_1)) == 0)
    sub_41a70c(0, arg2)
else
    sub_4974cc(ebx_1)
    (*(*arg2[0xc] + 0x10))()
    void var_8
    esp = &var_8
    (*(*ebx_1[0xc] + 0x28))()
    int32_t eax_10 = sub_496e30(arg2) - 1
    
    if (eax_10 s>= 0)
        int32_t var_c_1 = eax_10 + 1
        int32_t i
        
        do
            if (sub_496e1c(arg2) == 0)
                sub_4972ec(ebx_1, nullptr, nullptr)
            else
                sub_404dec(sub_403b48(*sub_496e1c(arg2), &ebp_1[-0x43]), &ebp_1[-0x43])
                int32_t eax_19
                eax_19, ebx_1, ebp_1 = sub_4195c0(ebp_1[-3])
                *ebx_1
                sub_4970d8(&ebp_1[-1], eax_19)
                
                if (ebp_1[-1] != 0)
                    sub_496e1c(arg2)
                    (*(*ebp_1[-1] + 8))()
                
                sub_496e3c(arg2)
                sub_4972ec(ebx_1, ebp_1[-1], ebp_1[-0x44])
            
            i = ebp_1[-2]
            ebp_1[-2] -= 1
        while (i != 1)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_4974c5
sub_404b88(&ebp_1[-0x44])
sub_404b88(&ebp_1[-3])
return &ebp_1[-3]
