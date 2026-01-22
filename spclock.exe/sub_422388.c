// 函数: sub_422388
// 地址: 0x422388
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_144 = ebx
int32_t esi
int32_t var_148 = esi
int32_t edi
int32_t var_14c = edi
int32_t var_40
__builtin_memset(&var_40, 0, 0x14)
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t* var_150 = &var_4
int32_t (* var_154)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_3 = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList_3
fsbase->NtTib.ExceptionList = &ExceptionList_3
char eax_1
int32_t ecx
int32_t edx
eax_1, ecx, edx = sub_4159ec()

if (eax_1 != 0)
    edx.b = 1
    ecx, edx = sub_40451c(sub_40cf6c(sub_41715c+0x268, edx, data_4ac248))

uint32_t eax_5 = zx.d(sub_415884(arg2)) & 0xfff
int64_t var_160
int32_t eax_19
int32_t ecx_3

if (eax_5 s> 7)
    if (eax_5 s>= 0x10)
        if (eax_5 - 0x10 u< 3)
            eax_19, ecx_3 = sub_411168(arg2)
            sub_420fbc(arg1, eax_19, ecx_3)
        else if (eax_5 - 0x13 u< 2)
            int32_t eax_34
            int32_t edx_7
            eax_34, edx_7 = sub_411c38(arg2)
            var_160:4.d = edx_7
            var_160.d = eax_34
            sub_421030(arg1, var_160)
            esp = &ExceptionList_3
        else
            if (eax_5 != 0x100)
                goto label_422576
            
            esp = &var_8
            uint8_t* var_34
            ebp_1 = sub_4228e0(sub_413adc(&var_34, arg2, esi), var_34)
    else if (eax_5 == 8)
        void* var_30
        sub_4141fc(&var_30, arg2, esi)
        esp = &var_8
        sub_422934(arg1, var_30)
    else
        if (eax_5 != 0xb)
            goto label_422576
        
        char eax_30
        int32_t ecx_4
        eax_30, ecx_4 = sub_412584()
        
        if (eax_30 == 0)
            sub_4229ec(ecx_4, 8)
        else
            sub_4229ec(ecx_4, 9)
else if (eax_5 == 7)
    sub_412ac8(arg2)
    double var_160_2 = fconvert.d(arg3)
    sub_420ed4(arg1)
    esp = &ExceptionList_3
else
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2
    
    if (eax_5 u> 6)
    label_422576:
        var_160:4.d = &var_4
        var_160.d = j_sub_404188
        ExceptionList_2 = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList_2
        int32_t var_10
        char eax_37
        int16_t* ebx_2
        void* ebp_2
        int32_t esi_1
        eax_37, ebx_2, ebp_2, esi_1 = sub_415ce4(*arg2, &var_10)
        
        if (eax_37 != 0)
            sub_4147c8(ebp_2 - 0x34, ebx_2, sub_406550(ebp_2 - 4))
            char eax_41
            int32_t ecx_7
            int32_t edx_10
            eax_41, ecx_7, edx_10 = sub_40eb24(*(ebp_2 - 0x34), 0x422774, ebp_2 - 4)
            
            if (eax_41 != 0)
                *(ebp_2 - 0x14) = 0
                edx_10.b = 1
                int32_t eax_45
                int32_t ecx_9
                int32_t edx_13
                eax_45, ecx_9, edx_13 = sub_403c38(ecx_7, edx_10)
                *(ebp_2 - 0x10) = eax_45
                int32_t (* var_16c)(void* arg1, void* arg2) = j_sub_40443c
                struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = &ExceptionList_1
                edx_13.b = 1
                int32_t eax_47
                int32_t edx_14
                eax_47, edx_14 = sub_403c38(ecx_9, edx_13)
                *(ebp_2 - 0x14) = eax_47
                edx_14.b = 1
                *(ebp_2 - 0x18) = sub_41d37c(*(ebp_2 - 0x10), edx_14, sub_4182b4+0x19c, 0x400)
                int32_t (* var_178)(void* arg1, void* arg2) = j_sub_40443c
                struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = &ExceptionList
                *(ebp_2 - 0x14)
                (*(**(ebp_2 - 4) + 0x10))(ExceptionList, var_178, ebp_2, ExceptionList_1, var_16c, 
                    ebp_2)
                *(ebp_2 - 0x1c) = (***(ebp_2 - 0x14))()
                int32_t ecx_13 =
                    sub_404dec(sub_403b48(**(ebp_2 - 0xc), ebp_2 - 0x13c), ebp_2 - 0x13c)
                *(ebp_2 - 0x18)
                void* ebp_3 = sub_4228e0(ecx_13, *(ebp_2 - 0x3c))
                sub_420654(*(ebp_3 - 0x18), ebp_3 - 0x1c, 4)
                sub_420654(*(ebp_3 - 0x18), *(*(ebp_3 - 0x14) + 4), *(ebp_3 - 0x1c))
                fsbase->NtTib.ExceptionList = ExceptionList
                void* (* var_174_2)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, 
                    int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9) = sub_4226a4
                return sub_403c68(*(ebp_3 - 0x18))
        
        int32_t ecx_8 = sub_413adc(ebp_2 - 0x38, ebx_2, esi_1)
        *(ebp_2 - 8)
        ebp_1 = sub_4228e0(ecx_8, *(ebp_2 - 0x38))
        esp = &var_8
        int32_t var_14
        fsbase->NtTib.ExceptionList = var_14
    else
        switch (eax_5)
            case 0
                edx.b = 0xd
                sub_4229ec(ecx, edx.b)
            case 1
                sub_4229ec(ecx, 0)
            case 2, 3
                eax_19, ecx_3 = sub_411168(arg2)
                sub_420fbc(arg1, eax_19, ecx_3)
            case 4
                sub_412ac8(arg2)
                var_160:4.d = fconvert.s(arg3)
                sub_420e8c(arg1)
                esp = &ExceptionList_3
            case 5
                sub_412ac8(arg2)
                ExceptionList_2.t = arg3
                sub_420e68(arg1)
                esp = &ExceptionList_3
            case 6
                sub_413424(arg2)
                int64_t var_160_1 = int.q(arg3)
                sub_420eb0(arg1)
                esp = &ExceptionList_3
esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = 0x42276b
sub_404bac(&ebp_1[-0xf], 2)
sub_406550(&ebp_1[-0xd])
sub_404b88(&ebp_1[-0xc])
sub_405368(&ebp_1[-0xb])
sub_406550(&ebp_1[-1])
return &ebp_1[-1]
