/* Generated code for Python module 'numpy'
 * created by Nuitka version 2.6.9
 *
 * This code is in part copyright 2025 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_numpy" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy;
PyDictObject *moduledict_numpy;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[721];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[721];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("numpy"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 721; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 721; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 35
#if PYTHON_VERSION >= 0x3c0
NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyInterpreterState *interp, PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = interp->dict_state.next_keys_version++;
    dk->dk_version = result;
    return result;
}
#elif PYTHON_VERSION >= 0x3b0
static uint32_t _Nuitka_next_dict_keys_version = 2;

NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = _Nuitka_next_dict_keys_version++;
    dk->dk_version = result;
    return result;
}
#endif
#endif

// Accessors to module variables.
static PyObject *module_var_accessor_numpy_$$_DeprecationWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[57]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[57])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[57], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[57])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[57], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[57]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[57]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[57]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$_FutureWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[49]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[49])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[49], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[49])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[49], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[49]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[49]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[49]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$_PytestTester(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[696]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[696])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[696], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[696])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[696], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[696]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[696]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[696]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$_UserWarning(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[709]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[709])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[709], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[709])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[709], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[709]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[709]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[709]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$___NUMPY_SETUP__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[126]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[126])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[126], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[126])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[126], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[126]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[126]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[126]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$___expired_attributes__(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[52]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[52])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[52], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[52])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[52], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[52]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[52]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[52]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$___file__(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[1]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[1])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[1], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[1])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[1], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[1]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[1]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[1]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$___former_attrs__(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[51]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[51])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[51], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[51])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[51], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[51]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[51]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[51]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$___future_scalars__(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[44]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[44])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[44], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[44])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[44], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[44]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[44]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[44]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$___numpy_submodules__(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[41]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[41])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[41], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[41])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[41], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[41]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[41]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[41]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$___path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[110]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[110])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[110], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[110])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[110], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[110]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[110]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[110]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$___spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[720]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[720])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[720], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[720])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[720], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[720]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[720]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[720]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$__core(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[139]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[139])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[139], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[139])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[139], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[139]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[139]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[139]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$__delvewheel_patch_1_10_0(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[115]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[115])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[115], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[115])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[115], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[115]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[115]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[115]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$__int_extended_msg(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[654]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[654])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[654], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[654])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[654], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[654]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[654]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[654]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$__mat(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[643]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[643])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[643], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[643])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[643], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[643]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[643]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[643]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$__msg(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[650]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[650])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[650], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[650])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[650], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[650]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[650]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[650]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$__sanity_check(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[699]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[699])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[699], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[699])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[699], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[699]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[699]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[699]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$__specific_msg(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[652]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[652])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[652], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[652])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[652], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[652]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[652]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[652]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$__type_info(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[660]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[660])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[660], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[660])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[660], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[660]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[660]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[660]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$_abs(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[66]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[66])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[66], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[66])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[66], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[66]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[66]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[66]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$_array(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[72]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[72])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[72], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[72])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[72], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[72]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[72]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[72]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$_e(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[135]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[135])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[135], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[135])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[135], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[135]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[135]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[135]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$_float32(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[63]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[63])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[63], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[63])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[63], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[63]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[63]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[63]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$_hugepage_setup(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[701]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[701])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[701], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[701])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[701], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[701]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[701]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[701]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$_lib(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[459]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[459])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[459], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[459])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[459], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[459]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[459]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[459]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$_linspace(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[76]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[76])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[76], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[76])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[76], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[76]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[76]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[76]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$_msg(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[137]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[137])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[137], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[137])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[137], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[137]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[137]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[137]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$_ones(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[62]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[62])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[62], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[62])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[62], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[62]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[62]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[62]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$_os(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[83]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[83])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[83], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[83])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[83], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[83]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[83]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[83]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$_polyfit(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[79]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[79])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[79], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[79])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[79], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[79]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[79]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[79]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$_polyval(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[78]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[78])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[78], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[78])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[78], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[78]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[78]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[78]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$_sys(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[87]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[87])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[87], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[87])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[87], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[87]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[87]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[87]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$_ta(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[457]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[457])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[457], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[457])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[457], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[457]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[457]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[457]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy_$$_warnings(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[5]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[5])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[5], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[5])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[5], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[5]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)mod_consts[5]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_70ea690155060c9db3867ba3c055ce16;
static PyCodeObject *code_objects_59e888e163fcc992b59c5f235a3bb2e5;
static PyCodeObject *code_objects_751dad88e1cfdd53cd359804e08ed9b7;
static PyCodeObject *code_objects_5fd8ffb61116aa28b98124f7cfaf3081;
static PyCodeObject *code_objects_b6a5d0dff53e8ef812e971c783fd7bf0;
static PyCodeObject *code_objects_a2f76c947962c5036c5b2ac068d715b3;
static PyCodeObject *code_objects_93d0e90ac558b3ea256811c6ca6b5e92;
static PyCodeObject *code_objects_1bae4894612b864e0edf3cc9e976b2f7;
static PyCodeObject *code_objects_29f2faa976ece14b73f8b04269465c8c;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[711]); CHECK_OBJECT(module_filename_obj);
    code_objects_70ea690155060c9db3867ba3c055ce16 = MAKE_CODE_OBJECT(module_filename_obj, 525, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[97], mod_consts[98], mod_consts[712], NULL, 1, 0, 0);
    code_objects_59e888e163fcc992b59c5f235a3bb2e5 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[713], mod_consts[713], NULL, NULL, 0, 0, 0);
    code_objects_751dad88e1cfdd53cd359804e08ed9b7 = MAKE_CODE_OBJECT(module_filename_obj, 430, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[693], mod_consts[693], mod_consts[714], NULL, 0, 0, 0);
    code_objects_5fd8ffb61116aa28b98124f7cfaf3081 = MAKE_CODE_OBJECT(module_filename_obj, 339, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[692], mod_consts[692], mod_consts[715], NULL, 1, 0, 0);
    code_objects_b6a5d0dff53e8ef812e971c783fd7bf0 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[115], mod_consts[115], mod_consts[716], NULL, 0, 0, 0);
    code_objects_a2f76c947962c5036c5b2ac068d715b3 = MAKE_CODE_OBJECT(module_filename_obj, 471, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[700], mod_consts[700], mod_consts[717], NULL, 0, 0, 0);
    code_objects_93d0e90ac558b3ea256811c6ca6b5e92 = MAKE_CODE_OBJECT(module_filename_obj, 554, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[710], mod_consts[710], mod_consts[100], NULL, 0, 0, 0);
    code_objects_1bae4894612b864e0edf3cc9e976b2f7 = MAKE_CODE_OBJECT(module_filename_obj, 445, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[699], mod_consts[699], mod_consts[718], NULL, 0, 0, 0);
    code_objects_29f2faa976ece14b73f8b04269465c8c = MAKE_CODE_OBJECT(module_filename_obj, 508, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[701], mod_consts[701], mod_consts[719], NULL, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_numpy$$$function__6_hugepage_setup$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$$$function__1__delvewheel_patch_1_10_0(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$$$function__2___getattr__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$$$function__3___dir__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$$$function__4__sanity_check(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$$$function__5__mac_os_check(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$$$function__6_hugepage_setup(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$$$function__7__pyinstaller_hooks_dir(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_numpy$$$function__1__delvewheel_patch_1_10_0(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_os = NULL;
    PyObject *var_libs_dir = NULL;
    PyObject *tmp_assignment_expr_1__value = NULL;
    struct Nuitka_FrameObject *frame_frame_numpy$$$function__1__delvewheel_patch_1_10_0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_frame_numpy$$$function__1__delvewheel_patch_1_10_0 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_1 == NULL));
        assert(var_os == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_os = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_numpy$$$function__1__delvewheel_patch_1_10_0)) {
        Py_XDECREF(cache_frame_frame_numpy$$$function__1__delvewheel_patch_1_10_0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_numpy$$$function__1__delvewheel_patch_1_10_0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_numpy$$$function__1__delvewheel_patch_1_10_0 = MAKE_FUNCTION_FRAME(tstate, code_objects_b6a5d0dff53e8ef812e971c783fd7bf0, module_numpy, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_numpy$$$function__1__delvewheel_patch_1_10_0->m_type_description == NULL);
    frame_frame_numpy$$$function__1__delvewheel_patch_1_10_0 = cache_frame_frame_numpy$$$function__1__delvewheel_patch_1_10_0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_numpy$$$function__1__delvewheel_patch_1_10_0);
    assert(Py_REFCNT(frame_frame_numpy$$$function__1__delvewheel_patch_1_10_0) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isdir_arg_1;
        PyObject *tmp_capi_result_1;
        int tmp_truth_name_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_path_arg_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_path_arg_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_args_element_value_3;
            tmp_expression_value_1 = IMPORT_HARD_NTPATH();
            assert(!(tmp_expression_value_1 == NULL));
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
            if (tmp_called_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 93;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            tmp_path_arg_2 = module_var_accessor_numpy_$$___file__(tstate);
            if (unlikely(tmp_path_arg_2 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[1]);
            }

            if (tmp_path_arg_2 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_called_value_1);

                exception_lineno = 93;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            tmp_args_element_value_1 = OS_PATH_DIRNAME(tstate, tmp_path_arg_2);
            if (tmp_args_element_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_called_value_1);

                exception_lineno = 93;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            tmp_args_element_value_2 = mod_consts[2];
            tmp_args_element_value_3 = mod_consts[3];
            frame_frame_numpy$$$function__1__delvewheel_patch_1_10_0->m_frame.f_lineno = 93;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
                tmp_path_arg_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
            }

            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_path_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 93;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = OS_PATH_ABSPATH(tstate, tmp_path_arg_1);
            Py_DECREF(tmp_path_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 93;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            assert(tmp_assignment_expr_1__value == NULL);
            tmp_assignment_expr_1__value = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT(tmp_assignment_expr_1__value);
            tmp_assign_source_3 = tmp_assignment_expr_1__value;
            assert(var_libs_dir == NULL);
            Py_INCREF(tmp_assign_source_3);
            var_libs_dir = tmp_assign_source_3;
        }
        CHECK_OBJECT(tmp_assignment_expr_1__value);
        tmp_isdir_arg_1 = tmp_assignment_expr_1__value;
        Py_INCREF(tmp_isdir_arg_1);
        goto try_return_handler_2;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_assignment_expr_1__value);
        Py_DECREF(tmp_assignment_expr_1__value);
        tmp_assignment_expr_1__value = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_lineno_1 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_1 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_capi_result_1 = OS_PATH_FILE_ISDIR(tstate, tmp_isdir_arg_1);
        Py_DECREF(tmp_isdir_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_capi_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_capi_result_1);

            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_capi_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_1 = IMPORT_HARD_OS();
        assert(!(tmp_called_instance_1 == NULL));
        CHECK_OBJECT(var_libs_dir);
        tmp_args_element_value_4 = var_libs_dir;
        frame_frame_numpy$$$function__1__delvewheel_patch_1_10_0->m_frame.f_lineno = 94;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[4], tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 94;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy$$$function__1__delvewheel_patch_1_10_0, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_numpy$$$function__1__delvewheel_patch_1_10_0->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$$$function__1__delvewheel_patch_1_10_0, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_numpy$$$function__1__delvewheel_patch_1_10_0,
        type_description_1,
        var_os,
        var_libs_dir
    );


    // Release cached frame if used for exception.
    if (frame_frame_numpy$$$function__1__delvewheel_patch_1_10_0 == cache_frame_frame_numpy$$$function__1__delvewheel_patch_1_10_0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_numpy$$$function__1__delvewheel_patch_1_10_0);
        cache_frame_frame_numpy$$$function__1__delvewheel_patch_1_10_0 = NULL;
    }

    assertFrameObject(frame_frame_numpy$$$function__1__delvewheel_patch_1_10_0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_os);
    Py_DECREF(var_os);
    var_os = NULL;
    CHECK_OBJECT(var_libs_dir);
    Py_DECREF(var_libs_dir);
    var_libs_dir = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(var_os);
    Py_DECREF(var_os);
    var_os = NULL;
    Py_XDECREF(var_libs_dir);
    var_libs_dir = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$$$function__2___getattr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_attr = python_pars[0];
    PyObject *var_warnings = NULL;
    PyObject *var_linalg = NULL;
    PyObject *var_fft = NULL;
    PyObject *var_dtypes = NULL;
    PyObject *var_random = NULL;
    PyObject *var_polynomial = NULL;
    PyObject *var_ma = NULL;
    PyObject *var_ctypeslib = NULL;
    PyObject *var_exceptions = NULL;
    PyObject *var_testing = NULL;
    PyObject *var_matlib = NULL;
    PyObject *var_f2py = NULL;
    PyObject *var_typing = NULL;
    PyObject *var_rec = NULL;
    PyObject *var_char = NULL;
    PyObject *var_core = NULL;
    PyObject *var_strings = NULL;
    PyObject *var_distutils = NULL;
    struct Nuitka_FrameObject *frame_frame_numpy$$$function__2___getattr__;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_frame_numpy$$$function__2___getattr__ = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_numpy$$$function__2___getattr__)) {
        Py_XDECREF(cache_frame_frame_numpy$$$function__2___getattr__);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_numpy$$$function__2___getattr__ == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_numpy$$$function__2___getattr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5fd8ffb61116aa28b98124f7cfaf3081, module_numpy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_numpy$$$function__2___getattr__->m_type_description == NULL);
    frame_frame_numpy$$$function__2___getattr__ = cache_frame_frame_numpy$$$function__2___getattr__;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_numpy$$$function__2___getattr__);
    assert(Py_REFCNT(frame_frame_numpy$$$function__2___getattr__) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[5];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = const_int_0;
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 341;
        tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 341;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_warnings == NULL);
        var_warnings = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_attr);
        tmp_cmp_expr_left_1 = par_attr;
        tmp_cmp_expr_right_1 = mod_consts[6];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[7];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = const_int_0;
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 344;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 344;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy,
                mod_consts[6],
                const_int_0
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[6]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 344;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_linalg == NULL);
        var_linalg = tmp_assign_source_2;
    }
    CHECK_OBJECT(var_linalg);
    tmp_return_value = var_linalg;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_attr);
        tmp_cmp_expr_left_2 = par_attr;
        tmp_cmp_expr_right_2 = mod_consts[8];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 346;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[9];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = const_int_0;
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 347;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 347;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_numpy,
                mod_consts[8],
                const_int_0
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[8]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 347;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fft == NULL);
        var_fft = tmp_assign_source_3;
    }
    CHECK_OBJECT(var_fft);
    tmp_return_value = var_fft;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_attr);
        tmp_cmp_expr_left_3 = par_attr;
        tmp_cmp_expr_right_3 = mod_consts[10];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 349;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[11];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = const_int_0;
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 350;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 350;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_numpy,
                mod_consts[10],
                const_int_0
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[10]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 350;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dtypes == NULL);
        var_dtypes = tmp_assign_source_4;
    }
    CHECK_OBJECT(var_dtypes);
    tmp_return_value = var_dtypes;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_attr);
        tmp_cmp_expr_left_4 = par_attr;
        tmp_cmp_expr_right_4 = mod_consts[12];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 352;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[13];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = const_int_0;
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 353;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 353;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_numpy,
                mod_consts[12],
                const_int_0
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[12]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 353;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_random == NULL);
        var_random = tmp_assign_source_5;
    }
    CHECK_OBJECT(var_random);
    tmp_return_value = var_random;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_attr);
        tmp_cmp_expr_left_5 = par_attr;
        tmp_cmp_expr_right_5 = mod_consts[14];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 355;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[15];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = const_int_0;
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 356;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 356;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_numpy,
                mod_consts[14],
                const_int_0
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 356;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_polynomial == NULL);
        var_polynomial = tmp_assign_source_6;
    }
    CHECK_OBJECT(var_polynomial);
    tmp_return_value = var_polynomial;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(par_attr);
        tmp_cmp_expr_left_6 = par_attr;
        tmp_cmp_expr_right_6 = mod_consts[16];
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 358;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[17];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = Py_None;
        tmp_level_value_7 = const_int_0;
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 359;
        tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 359;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_numpy,
                mod_consts[16],
                const_int_0
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[16]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 359;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ma == NULL);
        var_ma = tmp_assign_source_7;
    }
    CHECK_OBJECT(var_ma);
    tmp_return_value = var_ma;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(par_attr);
        tmp_cmp_expr_left_7 = par_attr;
        tmp_cmp_expr_right_7 = mod_consts[18];
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 361;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[19];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = Py_None;
        tmp_level_value_8 = const_int_0;
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 362;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 362;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_numpy,
                mod_consts[18],
                const_int_0
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[18]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 362;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctypeslib == NULL);
        var_ctypeslib = tmp_assign_source_8;
    }
    CHECK_OBJECT(var_ctypeslib);
    tmp_return_value = var_ctypeslib;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(par_attr);
        tmp_cmp_expr_left_8 = par_attr;
        tmp_cmp_expr_right_8 = mod_consts[20];
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 364;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[21];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = Py_None;
        tmp_level_value_9 = const_int_0;
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 365;
        tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 365;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_numpy,
                mod_consts[20],
                const_int_0
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[20]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 365;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_exceptions == NULL);
        var_exceptions = tmp_assign_source_9;
    }
    CHECK_OBJECT(var_exceptions);
    tmp_return_value = var_exceptions;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(par_attr);
        tmp_cmp_expr_left_9 = par_attr;
        tmp_cmp_expr_right_9 = mod_consts[22];
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 367;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[23];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = Py_None;
        tmp_level_value_10 = const_int_0;
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 368;
        tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 368;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_numpy,
                mod_consts[22],
                const_int_0
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[22]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 368;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_testing == NULL);
        var_testing = tmp_assign_source_10;
    }
    CHECK_OBJECT(var_testing);
    tmp_return_value = var_testing;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_9;
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(par_attr);
        tmp_cmp_expr_left_10 = par_attr;
        tmp_cmp_expr_right_10 = mod_consts[24];
        tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 370;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[25];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = Py_None;
        tmp_level_value_11 = const_int_0;
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 371;
        tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 371;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_numpy,
                mod_consts[24],
                const_int_0
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[24]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 371;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_matlib == NULL);
        var_matlib = tmp_assign_source_11;
    }
    CHECK_OBJECT(var_matlib);
    tmp_return_value = var_matlib;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_10;
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        CHECK_OBJECT(par_attr);
        tmp_cmp_expr_left_11 = par_attr;
        tmp_cmp_expr_right_11 = mod_consts[26];
        tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 373;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[27];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = Py_None;
        tmp_level_value_12 = const_int_0;
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 374;
        tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 374;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_numpy,
                mod_consts[26],
                const_int_0
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[26]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 374;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_f2py == NULL);
        var_f2py = tmp_assign_source_12;
    }
    CHECK_OBJECT(var_f2py);
    tmp_return_value = var_f2py;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_11;
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        CHECK_OBJECT(par_attr);
        tmp_cmp_expr_left_12 = par_attr;
        tmp_cmp_expr_right_12 = mod_consts[28];
        tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 376;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[29];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = Py_None;
        tmp_level_value_13 = const_int_0;
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 377;
        tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_import_name_from_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 377;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_numpy,
                mod_consts[28],
                const_int_0
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[28]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 377;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_typing == NULL);
        var_typing = tmp_assign_source_13;
    }
    CHECK_OBJECT(var_typing);
    tmp_return_value = var_typing;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_12;
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        CHECK_OBJECT(par_attr);
        tmp_cmp_expr_left_13 = par_attr;
        tmp_cmp_expr_right_13 = mod_consts[30];
        tmp_condition_result_13 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 379;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[31];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = Py_None;
        tmp_level_value_14 = const_int_0;
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 380;
        tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_import_name_from_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_numpy,
                mod_consts[30],
                const_int_0
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[30]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rec == NULL);
        var_rec = tmp_assign_source_14;
    }
    CHECK_OBJECT(var_rec);
    tmp_return_value = var_rec;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_13;
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        CHECK_OBJECT(par_attr);
        tmp_cmp_expr_left_14 = par_attr;
        tmp_cmp_expr_right_14 = mod_consts[32];
        tmp_condition_result_14 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 382;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[33];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = Py_None;
        tmp_level_value_15 = const_int_0;
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 383;
        tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_import_name_from_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 383;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_numpy,
                mod_consts[32],
                const_int_0
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[32]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 383;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_char == NULL);
        var_char = tmp_assign_source_15;
    }
    CHECK_OBJECT(var_char);
    tmp_return_value = var_char;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_14;
    branch_no_14:;
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        CHECK_OBJECT(par_attr);
        tmp_cmp_expr_left_15 = par_attr;
        tmp_cmp_expr_right_15 = mod_consts[34];
        tmp_condition_result_15 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 385;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_type_input_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_exception_import_error_name_1;
        tmp_make_exception_arg_1 = mod_consts[35];
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 386;
        tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AttributeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_input_1 == NULL));
        tmp_exception_import_error_name_1 = Py_None;
        Py_INCREF(tmp_exception_import_error_name_1);
        ((PyAttributeErrorObject *)tmp_raise_type_input_1)->name = tmp_exception_import_error_name_1;
        tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
        Py_DECREF(tmp_raise_type_input_1);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 386;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_state.exception_value = tmp_raise_type_1;
        exception_lineno = 386;
        RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_15;
    branch_no_15:;
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        CHECK_OBJECT(par_attr);
        tmp_cmp_expr_left_16 = par_attr;
        tmp_cmp_expr_right_16 = mod_consts[36];
        tmp_condition_result_16 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 388;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[37];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = Py_None;
        tmp_level_value_16 = const_int_0;
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 389;
        tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_import_name_from_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 389;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_numpy,
                mod_consts[36],
                const_int_0
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[36]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 389;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_core == NULL);
        var_core = tmp_assign_source_16;
    }
    CHECK_OBJECT(var_core);
    tmp_return_value = var_core;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_16;
    branch_no_16:;
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        CHECK_OBJECT(par_attr);
        tmp_cmp_expr_left_17 = par_attr;
        tmp_cmp_expr_right_17 = mod_consts[38];
        tmp_condition_result_17 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 391;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[39];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = Py_None;
        tmp_level_value_17 = const_int_0;
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 392;
        tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_import_name_from_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 392;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_numpy,
                mod_consts[38],
                const_int_0
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[38]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 392;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_strings == NULL);
        var_strings = tmp_assign_source_17;
    }
    CHECK_OBJECT(var_strings);
    tmp_return_value = var_strings;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_17;
    branch_no_17:;
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        CHECK_OBJECT(par_attr);
        tmp_cmp_expr_left_18 = par_attr;
        tmp_cmp_expr_right_18 = mod_consts[40];
        tmp_condition_result_18 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 394;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        bool tmp_condition_result_19;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        tmp_cmp_expr_left_19 = mod_consts[40];
        tmp_cmp_expr_right_19 = module_var_accessor_numpy_$$___numpy_submodules__(tstate);
        if (unlikely(tmp_cmp_expr_right_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[41]);
        }

        if (tmp_cmp_expr_right_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 395;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_19, tmp_cmp_expr_left_19);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 395;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_19 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_18 = mod_consts[42];
        tmp_globals_arg_value_18 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = Py_None;
        tmp_level_value_18 = const_int_0;
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 396;
        tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
        if (tmp_import_name_from_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 396;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_17,
                (PyObject *)moduledict_numpy,
                mod_consts[40],
                const_int_0
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[40]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 396;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_distutils == NULL);
        var_distutils = tmp_assign_source_18;
    }
    CHECK_OBJECT(var_distutils);
    tmp_return_value = var_distutils;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_type_input_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_exception_import_error_name_2;
        tmp_make_exception_arg_2 = mod_consts[43];
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 399;
        tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AttributeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_input_2 == NULL));
        tmp_exception_import_error_name_2 = Py_None;
        Py_INCREF(tmp_exception_import_error_name_2);
        ((PyAttributeErrorObject *)tmp_raise_type_input_2)->name = tmp_exception_import_error_name_2;
        tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
        Py_DECREF(tmp_raise_type_input_2);
        if (tmp_raise_type_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 399;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_state.exception_value = tmp_raise_type_2;
        exception_lineno = 399;
        RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_19:;
    branch_no_18:;
    branch_end_17:;
    branch_end_16:;
    branch_end_15:;
    branch_end_14:;
    branch_end_13:;
    branch_end_12:;
    branch_end_11:;
    branch_end_10:;
    branch_end_9:;
    branch_end_8:;
    branch_end_7:;
    branch_end_6:;
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    {
        bool tmp_condition_result_20;
        PyObject *tmp_cmp_expr_left_20;
        PyObject *tmp_cmp_expr_right_20;
        CHECK_OBJECT(par_attr);
        tmp_cmp_expr_left_20 = par_attr;
        tmp_cmp_expr_right_20 = module_var_accessor_numpy_$$___future_scalars__(tstate);
        if (unlikely(tmp_cmp_expr_right_20 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[44]);
        }

        if (tmp_cmp_expr_right_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 402;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_20, tmp_cmp_expr_left_20);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 402;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_20 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(var_warnings);
        tmp_expression_value_1 = var_warnings;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[45]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 405;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[46];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_attr);
            tmp_format_value_1 = par_attr;
            tmp_format_spec_1 = mod_consts[47];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 406;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[48];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_tuple_element_1 = PyUnicode_Join(mod_consts[47], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 406;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = module_var_accessor_numpy_$$_FutureWarning(tstate);
        if (unlikely(tmp_tuple_element_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[49]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 407;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[50]);
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 405;
        tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 405;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_20:;
    {
        bool tmp_condition_result_21;
        PyObject *tmp_cmp_expr_left_21;
        PyObject *tmp_cmp_expr_right_21;
        CHECK_OBJECT(par_attr);
        tmp_cmp_expr_left_21 = par_attr;
        tmp_cmp_expr_right_21 = module_var_accessor_numpy_$$___former_attrs__(tstate);
        if (unlikely(tmp_cmp_expr_right_21 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[51]);
        }

        if (tmp_cmp_expr_right_21 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 409;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_21, tmp_cmp_expr_left_21);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 409;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_21 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_type_input_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_exception_import_error_name_3;
        tmp_expression_value_2 = module_var_accessor_numpy_$$___former_attrs__(tstate);
        if (unlikely(tmp_expression_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[51]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 410;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_attr);
        tmp_subscript_value_1 = par_attr;
        tmp_make_exception_arg_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 410;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 410;
        tmp_raise_type_input_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AttributeError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_input_3 == NULL));
        tmp_exception_import_error_name_3 = Py_None;
        Py_INCREF(tmp_exception_import_error_name_3);
        ((PyAttributeErrorObject *)tmp_raise_type_input_3)->name = tmp_exception_import_error_name_3;
        tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
        Py_DECREF(tmp_raise_type_input_3);
        if (tmp_raise_type_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 410;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_state.exception_value = tmp_raise_type_3;
        exception_lineno = 410;
        RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_21:;
    {
        bool tmp_condition_result_22;
        PyObject *tmp_cmp_expr_left_22;
        PyObject *tmp_cmp_expr_right_22;
        CHECK_OBJECT(par_attr);
        tmp_cmp_expr_left_22 = par_attr;
        tmp_cmp_expr_right_22 = module_var_accessor_numpy_$$___expired_attributes__(tstate);
        if (unlikely(tmp_cmp_expr_right_22 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[52]);
        }

        if (tmp_cmp_expr_right_22 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 412;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_22, tmp_cmp_expr_left_22);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 412;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_22 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_type_input_4;
        PyObject *tmp_make_exception_arg_4;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_exception_import_error_name_4;
        tmp_tuple_element_3 = mod_consts[53];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 4);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(par_attr);
            tmp_format_value_2 = par_attr;
            tmp_format_spec_2 = mod_consts[47];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 414;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[54];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
            tmp_expression_value_3 = module_var_accessor_numpy_$$___expired_attributes__(tstate);
            if (unlikely(tmp_expression_value_3 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[52]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 415;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            CHECK_OBJECT(par_attr);
            tmp_subscript_value_2 = par_attr;
            tmp_format_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
            if (tmp_format_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 415;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_3 = mod_consts[47];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 415;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_make_exception_arg_4 = PyUnicode_Join(mod_consts[47], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_make_exception_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 415;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 413;
        tmp_raise_type_input_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AttributeError, tmp_make_exception_arg_4);
        Py_DECREF(tmp_make_exception_arg_4);
        assert(!(tmp_raise_type_input_4 == NULL));
        tmp_exception_import_error_name_4 = Py_None;
        Py_INCREF(tmp_exception_import_error_name_4);
        ((PyAttributeErrorObject *)tmp_raise_type_input_4)->name = tmp_exception_import_error_name_4;
        tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
        Py_DECREF(tmp_raise_type_input_4);
        if (tmp_raise_type_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 413;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_state.exception_value = tmp_raise_type_4;
        exception_lineno = 413;
        RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_22:;
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_cmp_expr_left_23;
        PyObject *tmp_cmp_expr_right_23;
        CHECK_OBJECT(par_attr);
        tmp_cmp_expr_left_23 = par_attr;
        tmp_cmp_expr_right_23 = mod_consts[55];
        tmp_condition_result_23 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
        if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_2;
        CHECK_OBJECT(var_warnings);
        tmp_expression_value_4 = var_warnings;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[45]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 420;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = mod_consts[56];
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
        tmp_tuple_element_4 = module_var_accessor_numpy_$$_DeprecationWarning(tstate);
        if (unlikely(tmp_tuple_element_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[57]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 423;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts[50]);
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 420;
        tmp_call_result_2 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 420;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_19 = mod_consts[33];
        tmp_globals_arg_value_19 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = Py_None;
        tmp_level_value_19 = const_int_0;
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 424;
        tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
        if (tmp_import_name_from_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_18,
                (PyObject *)moduledict_numpy,
                mod_consts[32],
                const_int_0
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[32]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_char == NULL);
        var_char = tmp_assign_source_19;
    }
    {
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_char);
        tmp_expression_value_5 = var_char;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[55]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 425;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_23:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_type_input_5;
        PyObject *tmp_make_exception_arg_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[58];
        tmp_kw_call_arg_value_1_1 = mod_consts[59];
        CHECK_OBJECT(par_attr);
        tmp_kw_call_arg_value_2_1 = par_attr;
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 427;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_make_exception_arg_5 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 427;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_numpy$$$function__2___getattr__->m_frame.f_lineno = 427;
        tmp_raise_type_input_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AttributeError, tmp_make_exception_arg_5);
        Py_DECREF(tmp_make_exception_arg_5);
        assert(!(tmp_raise_type_input_5 == NULL));
        tmp_raise_type_5 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_5);
        Py_DECREF(tmp_raise_type_input_5);
        if (tmp_raise_type_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 427;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_state.exception_value = tmp_raise_type_5;
        exception_lineno = 427;
        RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy$$$function__2___getattr__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_numpy$$$function__2___getattr__->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$$$function__2___getattr__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_numpy$$$function__2___getattr__,
        type_description_1,
        par_attr,
        var_warnings,
        var_linalg,
        var_fft,
        var_dtypes,
        var_random,
        var_polynomial,
        var_ma,
        var_ctypeslib,
        var_exceptions,
        var_testing,
        var_matlib,
        var_f2py,
        var_typing,
        var_rec,
        var_char,
        var_core,
        var_strings,
        var_distutils
    );


    // Release cached frame if used for exception.
    if (frame_frame_numpy$$$function__2___getattr__ == cache_frame_frame_numpy$$$function__2___getattr__) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_numpy$$$function__2___getattr__);
        cache_frame_frame_numpy$$$function__2___getattr__ = NULL;
    }

    assertFrameObject(frame_frame_numpy$$$function__2___getattr__);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_warnings);
    Py_DECREF(var_warnings);
    var_warnings = NULL;
    Py_XDECREF(var_linalg);
    var_linalg = NULL;
    Py_XDECREF(var_fft);
    var_fft = NULL;
    Py_XDECREF(var_dtypes);
    var_dtypes = NULL;
    Py_XDECREF(var_random);
    var_random = NULL;
    Py_XDECREF(var_polynomial);
    var_polynomial = NULL;
    Py_XDECREF(var_ma);
    var_ma = NULL;
    Py_XDECREF(var_ctypeslib);
    var_ctypeslib = NULL;
    Py_XDECREF(var_exceptions);
    var_exceptions = NULL;
    Py_XDECREF(var_testing);
    var_testing = NULL;
    Py_XDECREF(var_matlib);
    var_matlib = NULL;
    Py_XDECREF(var_f2py);
    var_f2py = NULL;
    Py_XDECREF(var_typing);
    var_typing = NULL;
    Py_XDECREF(var_rec);
    var_rec = NULL;
    Py_XDECREF(var_char);
    var_char = NULL;
    Py_XDECREF(var_core);
    var_core = NULL;
    Py_XDECREF(var_strings);
    var_strings = NULL;
    Py_XDECREF(var_distutils);
    var_distutils = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_warnings);
    var_warnings = NULL;
    Py_XDECREF(var_char);
    var_char = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$$$function__3___dir__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_public_symbols = NULL;
    struct Nuitka_FrameObject *frame_frame_numpy$$$function__3___dir__;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_numpy$$$function__3___dir__ = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_numpy$$$function__3___dir__)) {
        Py_XDECREF(cache_frame_frame_numpy$$$function__3___dir__);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_numpy$$$function__3___dir__ == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_numpy$$$function__3___dir__ = MAKE_FUNCTION_FRAME(tstate, code_objects_751dad88e1cfdd53cd359804e08ed9b7, module_numpy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_numpy$$$function__3___dir__->m_type_description == NULL);
    frame_frame_numpy$$$function__3___dir__ = cache_frame_frame_numpy$$$function__3___dir__;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_numpy$$$function__3___dir__);
    assert(Py_REFCNT(frame_frame_numpy$$$function__3___dir__) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = (PyObject *)moduledict_numpy;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[60]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 432;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_frame_numpy$$$function__3___dir__->m_frame.f_lineno = 432;
        tmp_bitor_expr_left_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_bitor_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 432;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_1 = module_var_accessor_numpy_$$___numpy_submodules__(tstate);
        if (unlikely(tmp_bitor_expr_right_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[41]);
        }

        if (tmp_bitor_expr_right_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_bitor_expr_left_1);

            exception_lineno = 432;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 432;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_public_symbols == NULL);
        var_public_symbols = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_isub_expr_left_1;
        PyObject *tmp_isub_expr_right_1;
        CHECK_OBJECT(var_public_symbols);
        tmp_isub_expr_left_1 = var_public_symbols;
        tmp_isub_expr_right_1 = PySet_New(mod_consts[61]);
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
        Py_DECREF(tmp_isub_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 434;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = tmp_isub_expr_left_1;
        var_public_symbols = tmp_assign_source_2;

    }
    {
        PyObject *tmp_list_arg_1;
        CHECK_OBJECT(var_public_symbols);
        tmp_list_arg_1 = var_public_symbols;
        tmp_return_value = MAKE_LIST(tstate, tmp_list_arg_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 438;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy$$$function__3___dir__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_numpy$$$function__3___dir__->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$$$function__3___dir__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_numpy$$$function__3___dir__,
        type_description_1,
        var_public_symbols
    );


    // Release cached frame if used for exception.
    if (frame_frame_numpy$$$function__3___dir__ == cache_frame_frame_numpy$$$function__3___dir__) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_numpy$$$function__3___dir__);
        cache_frame_frame_numpy$$$function__3___dir__ = NULL;
    }

    assertFrameObject(frame_frame_numpy$$$function__3___dir__);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_public_symbols);
    Py_DECREF(var_public_symbols);
    var_public_symbols = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_public_symbols);
    var_public_symbols = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$$$function__4__sanity_check(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_x = NULL;
    struct Nuitka_FrameObject *frame_frame_numpy$$$function__4__sanity_check;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_frame_numpy$$$function__4__sanity_check = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_numpy$$$function__4__sanity_check)) {
        Py_XDECREF(cache_frame_frame_numpy$$$function__4__sanity_check);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_numpy$$$function__4__sanity_check == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_numpy$$$function__4__sanity_check = MAKE_FUNCTION_FRAME(tstate, code_objects_1bae4894612b864e0edf3cc9e976b2f7, module_numpy, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_numpy$$$function__4__sanity_check->m_type_description == NULL);
    frame_frame_numpy$$$function__4__sanity_check = cache_frame_frame_numpy$$$function__4__sanity_check;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_numpy$$$function__4__sanity_check);
    assert(Py_REFCNT(frame_frame_numpy$$$function__4__sanity_check) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_1 = module_var_accessor_numpy_$$_ones(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[62]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 457;
            type_description_1 = "oN";
            goto try_except_handler_2;
        }
        tmp_kw_call_value_0_1 = module_var_accessor_numpy_$$_float32(tstate);
        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[63]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 457;
            type_description_1 = "oN";
            goto try_except_handler_2;
        }
        frame_frame_numpy$$$function__4__sanity_check->m_frame.f_lineno = 457;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, mod_consts[64], kw_values, mod_consts[65]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 457;
            type_description_1 = "oN";
            goto try_except_handler_2;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_3;
        tmp_called_value_2 = module_var_accessor_numpy_$$_abs(tstate);
        if (unlikely(tmp_called_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[66]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 458;
            type_description_1 = "oN";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_x);
        tmp_called_instance_1 = var_x;
        CHECK_OBJECT(var_x);
        tmp_args_element_value_2 = var_x;
        frame_frame_numpy$$$function__4__sanity_check->m_frame.f_lineno = 458;
        tmp_sub_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[67], tmp_args_element_value_2);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 458;
            type_description_1 = "oN";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = module_var_accessor_numpy_$$_float32(tstate);
        if (unlikely(tmp_called_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[63]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 458;
            type_description_1 = "oN";
            goto try_except_handler_2;
        }
        frame_frame_numpy$$$function__4__sanity_check->m_frame.f_lineno = 458;
        tmp_sub_expr_right_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts[68]);

        if (tmp_sub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 458;
            type_description_1 = "oN";
            goto try_except_handler_2;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 458;
            type_description_1 = "oN";
            goto try_except_handler_2;
        }
        frame_frame_numpy$$$function__4__sanity_check->m_frame.f_lineno = 458;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 458;
            type_description_1 = "oN";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = mod_consts[69];
        tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_FLOAT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 458;
            type_description_1 = "oN";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 458;
            type_description_1 = "oN";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_AssertionError);
        exception_state.exception_value = tmp_raise_type_1;
        exception_lineno = 459;
        RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
        type_description_1 = "oN";
        goto try_except_handler_2;
    }
    branch_no_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy$$$function__4__sanity_check, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        } else if (exception_keeper_lineno_1 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$$$function__4__sanity_check, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_2 = PyExc_AssertionError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_raise_cause_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[70];
        tmp_kw_call_arg_value_1_1 = module_var_accessor_numpy_$$___file__(tstate);
        if (unlikely(tmp_kw_call_arg_value_1_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[1]);
        }

        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 466;
            type_description_1 = "oN";
            goto try_except_handler_3;
        }
        frame_frame_numpy$$$function__4__sanity_check->m_frame.f_lineno = 466;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 466;
            type_description_1 = "oN";
            goto try_except_handler_3;
        }
        frame_frame_numpy$$$function__4__sanity_check->m_frame.f_lineno = 466;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_2 == NULL));
        tmp_raise_cause_1 = Py_None;
        exception_state.exception_value = tmp_raise_type_2;
        Py_INCREF(tmp_raise_cause_1);
        exception_lineno = 466;
        RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
        type_description_1 = "oN";
        goto try_except_handler_3;
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 456;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$$$function__4__sanity_check->m_frame)) {
            frame_frame_numpy$$$function__4__sanity_check->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oN";
    goto try_except_handler_3;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy$$$function__4__sanity_check, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_numpy$$$function__4__sanity_check->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$$$function__4__sanity_check, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_numpy$$$function__4__sanity_check,
        type_description_1,
        var_x,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_frame_numpy$$$function__4__sanity_check == cache_frame_frame_numpy$$$function__4__sanity_check) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_numpy$$$function__4__sanity_check);
        cache_frame_frame_numpy$$$function__4__sanity_check = NULL;
    }

    assertFrameObject(frame_frame_numpy$$$function__4__sanity_check);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_x);
    Py_DECREF(var_x);
    var_x = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_x);
    var_x = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$$$function__5__mac_os_check(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_c = NULL;
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var__ = NULL;
    struct Nuitka_FrameObject *frame_frame_numpy$$$function__5__mac_os_check;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_frame_numpy$$$function__5__mac_os_check = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_numpy$$$function__5__mac_os_check)) {
        Py_XDECREF(cache_frame_frame_numpy$$$function__5__mac_os_check);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_numpy$$$function__5__mac_os_check == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_numpy$$$function__5__mac_os_check = MAKE_FUNCTION_FRAME(tstate, code_objects_a2f76c947962c5036c5b2ac068d715b3, module_numpy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_numpy$$$function__5__mac_os_check->m_type_description == NULL);
    frame_frame_numpy$$$function__5__mac_os_check = cache_frame_frame_numpy$$$function__5__mac_os_check;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_numpy$$$function__5__mac_os_check);
    assert(Py_REFCNT(frame_frame_numpy$$$function__5__mac_os_check) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_arg_element_1;
        tmp_called_value_1 = module_var_accessor_numpy_$$_array(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[72]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 477;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_call_arg_element_1 = MAKE_LIST3(tstate, mod_consts[73],mod_consts[74],mod_consts[75]);
        frame_frame_numpy$$$function__5__mac_os_check->m_frame.f_lineno = 477;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 477;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(var_c == NULL);
        var_c = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = module_var_accessor_numpy_$$_linspace(tstate);
        if (unlikely(tmp_called_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[76]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 478;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_frame_numpy$$$function__5__mac_os_check->m_frame.f_lineno = 478;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_2, mod_consts[77]);

        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 478;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_3 = module_var_accessor_numpy_$$_polyval(tstate);
        if (unlikely(tmp_called_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[78]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 479;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_c);
        tmp_args_element_value_1 = var_c;
        CHECK_OBJECT(var_x);
        tmp_args_element_value_2 = var_x;
        frame_frame_numpy$$$function__5__mac_os_check->m_frame.f_lineno = 479;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 479;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(var_y == NULL);
        var_y = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_4 = module_var_accessor_numpy_$$_polyfit(tstate);
        if (unlikely(tmp_called_value_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[79]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 480;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_x);
        tmp_tuple_element_1 = var_x;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_y);
        tmp_tuple_element_1 = var_y;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[80];
        PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[81]);
        frame_frame_numpy$$$function__5__mac_os_check->m_frame.f_lineno = 480;
        tmp_assign_source_4 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 480;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(var__ == NULL);
        var__ = tmp_assign_source_4;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy$$$function__5__mac_os_check, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        } else if (exception_keeper_lineno_1 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$$$function__5__mac_os_check, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_1 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 476;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$$$function__5__mac_os_check->m_frame)) {
            frame_frame_numpy$$$function__5__mac_os_check->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oooo";
    goto try_except_handler_3;
    branch_no_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy$$$function__5__mac_os_check, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_numpy$$$function__5__mac_os_check->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$$$function__5__mac_os_check, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_numpy$$$function__5__mac_os_check,
        type_description_1,
        var_c,
        var_x,
        var_y,
        var__
    );


    // Release cached frame if used for exception.
    if (frame_frame_numpy$$$function__5__mac_os_check == cache_frame_frame_numpy$$$function__5__mac_os_check) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_numpy$$$function__5__mac_os_check);
        cache_frame_frame_numpy$$$function__5__mac_os_check = NULL;
    }

    assertFrameObject(frame_frame_numpy$$$function__5__mac_os_check);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$$$function__6_hugepage_setup(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_use_hugepage = NULL;
    PyObject *var_kernel_version = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_frame_numpy$$$function__6_hugepage_setup;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_frame_numpy$$$function__6_hugepage_setup = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_numpy$$$function__6_hugepage_setup)) {
        Py_XDECREF(cache_frame_frame_numpy$$$function__6_hugepage_setup);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_numpy$$$function__6_hugepage_setup == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_numpy$$$function__6_hugepage_setup = MAKE_FUNCTION_FRAME(tstate, code_objects_29f2faa976ece14b73f8b04269465c8c, module_numpy, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_numpy$$$function__6_hugepage_setup->m_type_description == NULL);
    frame_frame_numpy$$$function__6_hugepage_setup = cache_frame_frame_numpy$$$function__6_hugepage_setup;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_numpy$$$function__6_hugepage_setup);
    assert(Py_REFCNT(frame_frame_numpy$$$function__6_hugepage_setup) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = module_var_accessor_numpy_$$_os(tstate);
        if (unlikely(tmp_expression_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[83]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 515;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[84]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 515;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[85]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 515;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_frame_numpy$$$function__6_hugepage_setup->m_frame.f_lineno = 515;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts[86]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 515;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_use_hugepage == NULL);
        var_use_hugepage = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_expression_value_3 = module_var_accessor_numpy_$$_sys(tstate);
        if (unlikely(tmp_expression_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 516;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[88]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 516;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[89];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 516;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 516;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_use_hugepage);
        tmp_cmp_expr_left_2 = var_use_hugepage;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_int_pos_1;
        {
            PyObject *old = var_use_hugepage;
            assert(old != NULL);
            var_use_hugepage = tmp_assign_source_2;
            Py_INCREF(var_use_hugepage);
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_value_1;
        tmp_called_instance_1 = module_var_accessor_numpy_$$_os(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[83]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 524;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_frame_numpy$$$function__6_hugepage_setup->m_frame.f_lineno = 524;
        tmp_expression_value_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[90]);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 524;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[91]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 524;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[92]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 524;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_frame_numpy$$$function__6_hugepage_setup->m_frame.f_lineno = 524;
        tmp_expression_value_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts[93]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 524;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_1 = mod_consts[94];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 524;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert(var_kernel_version == NULL);
        var_kernel_version = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_tuple_arg_1;
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_kernel_version);
            tmp_iter_arg_1 = var_kernel_version;
            tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            if (tmp_assign_source_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 525;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_5;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_tuple_arg_1 = MAKE_GENERATOR_numpy$$$function__6_hugepage_setup$$$genexpr__1_genexpr(tstate, tmp_closure_1);

            goto try_return_handler_3;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_assign_source_4 = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 525;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_kernel_version;
            assert(old != NULL);
            var_kernel_version = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_kernel_version);
        tmp_cmp_expr_left_3 = var_kernel_version;
        tmp_cmp_expr_right_3 = mod_consts[95];
        tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_TUPLE_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 526;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_int_0;
        {
            PyObject *old = var_use_hugepage;
            assert(old != NULL);
            var_use_hugepage = tmp_assign_source_6;
            Py_INCREF(var_use_hugepage);
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy$$$function__6_hugepage_setup, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        } else if (exception_keeper_lineno_1 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$$$function__6_hugepage_setup, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_4 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = const_int_0;
        {
            PyObject *old = var_use_hugepage;
            assert(old != NULL);
            var_use_hugepage = tmp_assign_source_7;
            Py_INCREF(var_use_hugepage);
            Py_DECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 522;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$$$function__6_hugepage_setup->m_frame)) {
            frame_frame_numpy$$$function__6_hugepage_setup->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oo";
    goto try_except_handler_4;
    branch_end_3:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_use_hugepage);
        tmp_cmp_expr_left_5 = var_use_hugepage;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_int_pos_1;
        {
            PyObject *old = var_use_hugepage;
            assert(old != NULL);
            var_use_hugepage = tmp_assign_source_8;
            Py_INCREF(var_use_hugepage);
            Py_DECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(var_use_hugepage);
        tmp_int_arg_1 = var_use_hugepage;
        tmp_assign_source_9 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 534;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_use_hugepage;
            assert(old != NULL);
            var_use_hugepage = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    branch_end_4:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy$$$function__6_hugepage_setup, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_numpy$$$function__6_hugepage_setup->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$$$function__6_hugepage_setup, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_numpy$$$function__6_hugepage_setup,
        type_description_1,
        var_use_hugepage,
        var_kernel_version
    );


    // Release cached frame if used for exception.
    if (frame_frame_numpy$$$function__6_hugepage_setup == cache_frame_frame_numpy$$$function__6_hugepage_setup) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_numpy$$$function__6_hugepage_setup);
        cache_frame_frame_numpy$$$function__6_hugepage_setup = NULL;
    }

    assertFrameObject(frame_frame_numpy$$$function__6_hugepage_setup);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_use_hugepage);
    tmp_return_value = var_use_hugepage;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_use_hugepage);
    Py_DECREF(var_use_hugepage);
    var_use_hugepage = NULL;
    Py_XDECREF(var_kernel_version);
    var_kernel_version = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_use_hugepage);
    var_use_hugepage = NULL;
    Py_XDECREF(var_kernel_version);
    var_kernel_version = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct numpy$$$function__6_hugepage_setup$$$genexpr__1_genexpr_locals {
    PyObject *var_v;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    struct Nuitka_ExceptionPreservationItem exception_state;
    int exception_lineno;
    char yield_tmps[1024];
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    int exception_keeper_lineno_2;
};
#endif

static PyObject *numpy$$$function__6_hugepage_setup$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct numpy$$$function__6_hugepage_setup$$$genexpr__1_genexpr_locals *generator_heap = (struct numpy$$$function__6_hugepage_setup$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_v = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_70ea690155060c9db3867ba3c055ce16, module_numpy, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(tstate, generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 525;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_v;
            generator_heap->var_v = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_v);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_int_arg_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_v);
        tmp_int_arg_1 = generator_heap->var_v;
        tmp_expression_value_1 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


            generator_heap->exception_lineno = 525;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_int_arg_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_int_arg_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


            generator_heap->exception_lineno = 525;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


        generator_heap->exception_lineno = 525;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_lineno = 0;
    generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_state = generator_heap->exception_keeper_name_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &generator_heap->exception_state)) {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
        } else if ((generator_heap->exception_lineno != 0) && (exception_tb->tb_frame != &generator->m_frame->m_frame)) {
            exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_v
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);


    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_lineno = 0;
    generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

    Py_XDECREF(generator_heap->var_v);
    generator_heap->var_v = NULL;
    // Re-raise.
    generator_heap->exception_state = generator_heap->exception_keeper_name_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_v);
    generator_heap->var_v = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_numpy$$$function__6_hugepage_setup$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        numpy$$$function__6_hugepage_setup$$$genexpr__1_genexpr_context,
        module_numpy,
        mod_consts[97],
#if PYTHON_VERSION >= 0x350
        mod_consts[98],
#endif
        code_objects_70ea690155060c9db3867ba3c055ce16,
        closure,
        1,
#if 1
        sizeof(struct numpy$$$function__6_hugepage_setup$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_numpy$$$function__7__pyinstaller_hooks_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_Path = NULL;
    struct Nuitka_FrameObject *frame_frame_numpy$$$function__7__pyinstaller_hooks_dir;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_numpy$$$function__7__pyinstaller_hooks_dir = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_numpy$$$function__7__pyinstaller_hooks_dir)) {
        Py_XDECREF(cache_frame_frame_numpy$$$function__7__pyinstaller_hooks_dir);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_numpy$$$function__7__pyinstaller_hooks_dir == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_numpy$$$function__7__pyinstaller_hooks_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_93d0e90ac558b3ea256811c6ca6b5e92, module_numpy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_numpy$$$function__7__pyinstaller_hooks_dir->m_type_description == NULL);
    frame_frame_numpy$$$function__7__pyinstaller_hooks_dir = cache_frame_frame_numpy$$$function__7__pyinstaller_hooks_dir;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_numpy$$$function__7__pyinstaller_hooks_dir);
    assert(Py_REFCNT(frame_frame_numpy$$$function__7__pyinstaller_hooks_dir) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[99];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[100];
        tmp_level_value_1 = const_int_0;
        frame_frame_numpy$$$function__7__pyinstaller_hooks_dir->m_frame.f_lineno = 555;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 555;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy,
                mod_consts[101],
                const_int_0
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[101]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 555;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_Path == NULL);
        var_Path = tmp_assign_source_1;
    }
    {
        PyObject *tmp_list_element_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_Path);
        tmp_called_value_1 = var_Path;
        tmp_args_element_value_1 = module_var_accessor_numpy_$$___file__(tstate);
        if (unlikely(tmp_args_element_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[1]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 556;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_frame_numpy$$$function__7__pyinstaller_hooks_dir->m_frame.f_lineno = 556;
        tmp_called_instance_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 556;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_frame_numpy$$$function__7__pyinstaller_hooks_dir->m_frame.f_lineno = 556;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[102],
            PyTuple_GET_ITEM(mod_consts[103], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 556;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_frame_numpy$$$function__7__pyinstaller_hooks_dir->m_frame.f_lineno = 556;
        tmp_unicode_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[104]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_unicode_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 556;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 556;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM(tmp_return_value, 0, tmp_list_element_1);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy$$$function__7__pyinstaller_hooks_dir, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_numpy$$$function__7__pyinstaller_hooks_dir->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$$$function__7__pyinstaller_hooks_dir, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_numpy$$$function__7__pyinstaller_hooks_dir,
        type_description_1,
        var_Path
    );


    // Release cached frame if used for exception.
    if (frame_frame_numpy$$$function__7__pyinstaller_hooks_dir == cache_frame_frame_numpy$$$function__7__pyinstaller_hooks_dir) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_numpy$$$function__7__pyinstaller_hooks_dir);
        cache_frame_frame_numpy$$$function__7__pyinstaller_hooks_dir = NULL;
    }

    assertFrameObject(frame_frame_numpy$$$function__7__pyinstaller_hooks_dir);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_Path);
    Py_DECREF(var_Path);
    var_Path = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_Path);
    var_Path = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$$$function__1__delvewheel_patch_1_10_0(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$$$function__1__delvewheel_patch_1_10_0,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b6a5d0dff53e8ef812e971c783fd7bf0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$$$function__2___getattr__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$$$function__2___getattr__,
        mod_consts[692],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5fd8ffb61116aa28b98124f7cfaf3081,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$$$function__3___dir__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$$$function__3___dir__,
        mod_consts[693],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_751dad88e1cfdd53cd359804e08ed9b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$$$function__4__sanity_check(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$$$function__4__sanity_check,
        mod_consts[699],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1bae4894612b864e0edf3cc9e976b2f7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy,
        mod_consts[71],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$$$function__5__mac_os_check(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$$$function__5__mac_os_check,
        mod_consts[700],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a2f76c947962c5036c5b2ac068d715b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy,
        mod_consts[82],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$$$function__6_hugepage_setup(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$$$function__6_hugepage_setup,
        mod_consts[701],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_29f2faa976ece14b73f8b04269465c8c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy,
        mod_consts[96],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$$$function__7__pyinstaller_hooks_dir(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$$$function__7__pyinstaller_hooks_dir,
        mod_consts[710],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_93d0e90ac558b3ea256811c6ca6b5e92,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_numpy[] = {
    impl_numpy$$$function__1__delvewheel_patch_1_10_0,
    impl_numpy$$$function__2___getattr__,
    impl_numpy$$$function__3___dir__,
    impl_numpy$$$function__4__sanity_check,
    impl_numpy$$$function__5__mac_os_check,
    impl_numpy$$$function__6_hugepage_setup,
    impl_numpy$$$function__7__pyinstaller_hooks_dir,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    PyThreadState *tstate = PyThreadState_GET();

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_numpy);

    if (unlikely(offset == -1)) {
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = Nuitka_Function_ExtractCodeObjectDescription(tstate, function);

    PyObject *result = MAKE_TUPLE_EMPTY(tstate, 8);
    PyTuple_SET_ITEM(result, 0, Nuitka_PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM_IMMORTAL(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM_IMMORTAL(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM_IMMORTAL(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM_IMMORTAL(result, 6, Py_None);
#endif

    PyObject *closure = PyObject_GetAttr(
        (PyObject *)function,
        const_str_plain___closure__
    );

    if (closure != Py_None) {
        for (Py_ssize_t i=0; i < PyTuple_GET_SIZE(closure); i++) {
            struct Nuitka_CellObject *cell = (struct Nuitka_CellObject *)PyTuple_GET_ITEM(closure, i);

            assert(Nuitka_Cell_Check((PyObject *)cell));

            PyTuple_SET_ITEM0(
                closure,
                i,
                cell->ob_ref
            );
        }
    }

    PyTuple_SET_ITEM(result, 7, closure);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;
    PyObject *closure;

    if (!PyArg_ParseTuple(args, "OOOOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, &closure, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_numpy,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_numpy,
        sizeof(function_table_numpy) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Actual name might be different when loaded as a package.
#if defined(_NUITKA_MODULE) && 0
static char const *module_full_name = "numpy";
#endif

// Internal entry point for module code.
PyObject *modulecode_numpy(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy");

    // Store the module for future use.
    module_numpy = module;

    moduledict_numpy = MODULE_DICT(module_numpy);

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.
#if PYTHON_VERSION > 0x350 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_ALLOCATORS)
        initNuitkaAllocators();
#endif
        // Initialize the constant values used.
        _initBuiltinModule();

#if PYTHON_VERSION >= 0x3c0
        PyObject *real_module_name = PyObject_GetAttrString(module, "__name__");
        CHECK_OBJECT(real_module_name);
        module_full_name = strdup(Nuitka_String_AsString(real_module_name));
#endif

#if PYTHON_VERSION >= 0x3c0
        createGlobalConstants(tstate, real_module_name);
#else
        createGlobalConstants(tstate);
#endif
        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[47]
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

        // Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

#if defined(_NUITKA_MODULE) && 0 && 0 >= 0
        // Set our loader object in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain_loader, module_loader);
#endif

        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var_n = NULL;
    PyObject *outline_0_var_extended_msg = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_import_from_10__module = NULL;
    PyObject *tmp_import_from_11__module = NULL;
    PyObject *tmp_import_from_12__module = NULL;
    PyObject *tmp_import_from_13__module = NULL;
    PyObject *tmp_import_from_14__module = NULL;
    PyObject *tmp_import_from_15__module = NULL;
    PyObject *tmp_import_from_16__module = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    PyObject *tmp_import_from_7__module = NULL;
    PyObject *tmp_import_from_8__module = NULL;
    PyObject *tmp_import_from_9__module = NULL;
    struct Nuitka_FrameObject *frame_frame_numpy;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    struct Nuitka_ExceptionStackItem exception_preserved_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[105];
        UPDATE_STRING_DICT0(moduledict_numpy, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_numpy, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    frame_frame_numpy = MAKE_MODULE_FRAME(code_objects_59e888e163fcc992b59c5f235a3bb2e5, module_numpy);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_numpy);
    assert(Py_REFCNT(frame_frame_numpy) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        frame_frame_numpy->m_frame.f_lineno = 1;
        {
            PyObject *hard_module = IMPORT_HARD_OS();
            if (likely(hard_module != NULL)) {
                tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[107]);


            } else {
                tmp_expression_value_1 = NULL;
            }
        }
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[108]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = module_filename_obj;
        frame_frame_numpy->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 2);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
            frame_frame_numpy->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[84]);


                } else {
                    tmp_expression_value_2 = NULL;
                }
            }
            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[85]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_frame_numpy->m_frame.f_lineno = 1;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts[109]);

            Py_DECREF(tmp_called_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_numpy_$$___spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[111], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = module_var_accessor_numpy_$$___spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[112], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = module_var_accessor_numpy_$$___path__(tstate);
        if (unlikely(tmp_assattr_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[110]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = module_var_accessor_numpy_$$___spec__(tstate);
        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[113], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_numpy, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;


        tmp_assign_source_5 = MAKE_FUNCTION_numpy$$$function__1__delvewheel_patch_1_10_0(tstate);

        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_5);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        tmp_called_value_3 = module_var_accessor_numpy_$$__delvewheel_patch_1_10_0(tstate);
        assert(!(tmp_called_value_3 == NULL));
        frame_frame_numpy->m_frame.f_lineno = 97;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy, mod_consts[115]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[115]);

        exception_lineno = 98;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_numpy, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT0(moduledict_numpy, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[5];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = const_int_0;
        frame_frame_numpy->m_frame.f_lineno = 103;
        tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[116];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[117];
        tmp_level_value_2 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 105;
        tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy,
                mod_consts[118],
                const_int_0
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[118]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 105;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_numpy,
                mod_consts[119],
                const_int_0
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[119]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 105;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_11);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[120];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[121];
        tmp_level_value_3 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 106;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_numpy,
                mod_consts[52],
                const_int_0
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[52]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[47];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[122];
        tmp_level_value_4 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 110;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_numpy,
                mod_consts[123],
                const_int_0
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[123]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[123];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[124];
        tmp_level_value_5 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 111;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_numpy,
                mod_consts[125],
                const_int_0
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[125]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_14);
    }
    // Tried code:
    {
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = module_var_accessor_numpy_$$___NUMPY_SETUP__(tstate);
        if (unlikely(tmp_mvar_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[126]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 116;

            goto try_except_handler_2;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy, exception_keeper_lineno_2);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
        } else if (exception_keeper_lineno_2 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy, exception_keeper_lineno_2);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_1 = PyExc_NameError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = Py_False;
        UPDATE_STRING_DICT0(moduledict_numpy, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_15);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 115;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy->m_frame)) {
            frame_frame_numpy->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_3;
    branch_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_1;
        tmp_mvar_value_2 = module_var_accessor_numpy_$$___NUMPY_SETUP__(tstate);
        if (unlikely(tmp_mvar_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[126]);
        }

        if (tmp_mvar_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_2);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        tmp_expression_value_3 = IMPORT_HARD_SYS();
        assert(!(tmp_expression_value_3 == NULL));
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[127]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy->m_frame.f_lineno = 121;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[128],
            PyTuple_GET_ITEM(mod_consts[129], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[47];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[130];
        tmp_level_value_6 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 124;
        tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_numpy,
                mod_consts[131],
                const_int_0
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[131]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_16);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[132];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[133];
        tmp_level_value_7 = const_int_0;
        frame_frame_numpy->m_frame.f_lineno = 127;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 127;

            goto try_except_handler_4;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_numpy,
                mod_consts[134],
                const_int_0
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[134]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 127;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_17);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy, exception_keeper_lineno_4);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
        } else if (exception_keeper_lineno_4 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy, exception_keeper_lineno_4);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_4);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_2 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_assign_source_18); 
        UPDATE_STRING_DICT0(moduledict_numpy, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[136];
        UPDATE_STRING_DICT0(moduledict_numpy, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_19);
    }
    // Tried code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_type_input_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_raise_cause_1;
        tmp_make_exception_arg_1 = module_var_accessor_numpy_$$_msg(tstate);
        assert(!(tmp_make_exception_arg_1 == NULL));
        frame_frame_numpy->m_frame.f_lineno = 132;
        tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ImportError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_input_1 == NULL));
        tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
        Py_DECREF(tmp_raise_type_input_1);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 132;

            goto try_except_handler_6;
        }
        tmp_raise_cause_1 = module_var_accessor_numpy_$$_e(tstate);
        assert(!(tmp_raise_cause_1 == NULL));
        exception_state.exception_value = tmp_raise_type_1;
        Py_INCREF(tmp_raise_cause_1);
        exception_lineno = 132;
        RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);

        goto try_except_handler_6;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    if (DICT_REMOVE_ITEM((PyObject *)moduledict_numpy, mod_consts[135]) == false) {
        CLEAR_ERROR_OCCURRED(tstate);
    }

    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_5;
    // End of try:
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 126;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy->m_frame)) {
            frame_frame_numpy->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_5;
    branch_end_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[47];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[138];
        tmp_level_value_8 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 134;
        tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_numpy,
                mod_consts[139],
                const_int_0
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[139]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[139];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[140];
        tmp_level_value_9 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 135;
        tmp_assign_source_21 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_numpy,
                mod_consts[141],
                const_int_0
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[141]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_numpy,
                mod_consts[142],
                const_int_0
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[142]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_numpy,
                mod_consts[143],
                const_int_0
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[143]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_numpy,
                mod_consts[66],
                const_int_0
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[66]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_numpy,
                mod_consts[144],
                const_int_0
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[144]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_numpy,
                mod_consts[145],
                const_int_0
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[145]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_15 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_numpy,
                mod_consts[146],
                const_int_0
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[146]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_16 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_numpy,
                mod_consts[147],
                const_int_0
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[147]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_17 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_17,
                (PyObject *)moduledict_numpy,
                mod_consts[148],
                const_int_0
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[148]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_18 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_18,
                (PyObject *)moduledict_numpy,
                mod_consts[149],
                const_int_0
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[149]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_19 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_19,
                (PyObject *)moduledict_numpy,
                mod_consts[150],
                const_int_0
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts[150]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_20 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_20,
                (PyObject *)moduledict_numpy,
                mod_consts[151],
                const_int_0
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts[151]);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_21 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_21,
                (PyObject *)moduledict_numpy,
                mod_consts[152],
                const_int_0
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts[152]);
        }

        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_22 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_22,
                (PyObject *)moduledict_numpy,
                mod_consts[153],
                const_int_0
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts[153]);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_23 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_23,
                (PyObject *)moduledict_numpy,
                mod_consts[154],
                const_int_0
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts[154]);
        }

        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_24 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_24,
                (PyObject *)moduledict_numpy,
                mod_consts[155],
                const_int_0
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts[155]);
        }

        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_25 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_25,
                (PyObject *)moduledict_numpy,
                mod_consts[156],
                const_int_0
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts[156]);
        }

        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_26 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_26,
                (PyObject *)moduledict_numpy,
                mod_consts[157],
                const_int_0
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts[157]);
        }

        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_27 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_27,
                (PyObject *)moduledict_numpy,
                mod_consts[158],
                const_int_0
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts[158]);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_28 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_28,
                (PyObject *)moduledict_numpy,
                mod_consts[159],
                const_int_0
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts[159]);
        }

        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_29 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_29,
                (PyObject *)moduledict_numpy,
                mod_consts[160],
                const_int_0
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts[160]);
        }

        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_30 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_30,
                (PyObject *)moduledict_numpy,
                mod_consts[161],
                const_int_0
            );
        } else {
            tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts[161]);
        }

        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_31;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_31 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_31,
                (PyObject *)moduledict_numpy,
                mod_consts[162],
                const_int_0
            );
        } else {
            tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts[162]);
        }

        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_32;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_32 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_32,
                (PyObject *)moduledict_numpy,
                mod_consts[163],
                const_int_0
            );
        } else {
            tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts[163]);
        }

        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_import_name_from_33;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_33 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_33)) {
            tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_33,
                (PyObject *)moduledict_numpy,
                mod_consts[164],
                const_int_0
            );
        } else {
            tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts[164]);
        }

        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_34;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_34 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_34)) {
            tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_34,
                (PyObject *)moduledict_numpy,
                mod_consts[165],
                const_int_0
            );
        } else {
            tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts[165]);
        }

        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_35;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_35 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_35)) {
            tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_35,
                (PyObject *)moduledict_numpy,
                mod_consts[166],
                const_int_0
            );
        } else {
            tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts[166]);
        }

        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_import_name_from_36;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_36 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_36)) {
            tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_36,
                (PyObject *)moduledict_numpy,
                mod_consts[72],
                const_int_0
            );
        } else {
            tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts[72]);
        }

        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_import_name_from_37;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_37 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_37)) {
            tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_37,
                (PyObject *)moduledict_numpy,
                mod_consts[167],
                const_int_0
            );
        } else {
            tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts[167]);
        }

        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_import_name_from_38;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_38 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_38)) {
            tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_38,
                (PyObject *)moduledict_numpy,
                mod_consts[168],
                const_int_0
            );
        } else {
            tmp_assign_source_51 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts[168]);
        }

        if (tmp_assign_source_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_import_name_from_39;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_39 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_39)) {
            tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_39,
                (PyObject *)moduledict_numpy,
                mod_consts[169],
                const_int_0
            );
        } else {
            tmp_assign_source_52 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_39, mod_consts[169]);
        }

        if (tmp_assign_source_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_import_name_from_40;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_40 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_40)) {
            tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_40,
                (PyObject *)moduledict_numpy,
                mod_consts[170],
                const_int_0
            );
        } else {
            tmp_assign_source_53 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_40, mod_consts[170]);
        }

        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_import_name_from_41;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_41 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_41)) {
            tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_41,
                (PyObject *)moduledict_numpy,
                mod_consts[171],
                const_int_0
            );
        } else {
            tmp_assign_source_54 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_41, mod_consts[171]);
        }

        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_import_name_from_42;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_42 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_42)) {
            tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_42,
                (PyObject *)moduledict_numpy,
                mod_consts[172],
                const_int_0
            );
        } else {
            tmp_assign_source_55 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_42, mod_consts[172]);
        }

        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_import_name_from_43;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_43 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_43)) {
            tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_43,
                (PyObject *)moduledict_numpy,
                mod_consts[173],
                const_int_0
            );
        } else {
            tmp_assign_source_56 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_43, mod_consts[173]);
        }

        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_import_name_from_44;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_44 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_44)) {
            tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_44,
                (PyObject *)moduledict_numpy,
                mod_consts[174],
                const_int_0
            );
        } else {
            tmp_assign_source_57 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_44, mod_consts[174]);
        }

        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_import_name_from_45;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_45 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_45)) {
            tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_45,
                (PyObject *)moduledict_numpy,
                mod_consts[175],
                const_int_0
            );
        } else {
            tmp_assign_source_58 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_45, mod_consts[175]);
        }

        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_import_name_from_46;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_46 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_46)) {
            tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_46,
                (PyObject *)moduledict_numpy,
                mod_consts[176],
                const_int_0
            );
        } else {
            tmp_assign_source_59 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_46, mod_consts[176]);
        }

        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_import_name_from_47;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_47 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_47)) {
            tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_47,
                (PyObject *)moduledict_numpy,
                mod_consts[177],
                const_int_0
            );
        } else {
            tmp_assign_source_60 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_47, mod_consts[177]);
        }

        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_import_name_from_48;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_48 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_48)) {
            tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_48,
                (PyObject *)moduledict_numpy,
                mod_consts[178],
                const_int_0
            );
        } else {
            tmp_assign_source_61 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_48, mod_consts[178]);
        }

        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_import_name_from_49;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_49 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_49)) {
            tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_49,
                (PyObject *)moduledict_numpy,
                mod_consts[179],
                const_int_0
            );
        } else {
            tmp_assign_source_62 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_49, mod_consts[179]);
        }

        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_import_name_from_50;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_50 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_50)) {
            tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_50,
                (PyObject *)moduledict_numpy,
                mod_consts[180],
                const_int_0
            );
        } else {
            tmp_assign_source_63 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_50, mod_consts[180]);
        }

        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_import_name_from_51;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_51 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_51)) {
            tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_51,
                (PyObject *)moduledict_numpy,
                mod_consts[181],
                const_int_0
            );
        } else {
            tmp_assign_source_64 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_51, mod_consts[181]);
        }

        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_import_name_from_52;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_52 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_52)) {
            tmp_assign_source_65 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_52,
                (PyObject *)moduledict_numpy,
                mod_consts[182],
                const_int_0
            );
        } else {
            tmp_assign_source_65 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_52, mod_consts[182]);
        }

        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_import_name_from_53;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_53 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_53)) {
            tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_53,
                (PyObject *)moduledict_numpy,
                mod_consts[183],
                const_int_0
            );
        } else {
            tmp_assign_source_66 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_53, mod_consts[183]);
        }

        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_import_name_from_54;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_54 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_54)) {
            tmp_assign_source_67 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_54,
                (PyObject *)moduledict_numpy,
                mod_consts[184],
                const_int_0
            );
        } else {
            tmp_assign_source_67 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_54, mod_consts[184]);
        }

        if (tmp_assign_source_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_import_name_from_55;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_55 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_55)) {
            tmp_assign_source_68 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_55,
                (PyObject *)moduledict_numpy,
                mod_consts[185],
                const_int_0
            );
        } else {
            tmp_assign_source_68 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_55, mod_consts[185]);
        }

        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_import_name_from_56;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_56 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_56)) {
            tmp_assign_source_69 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_56,
                (PyObject *)moduledict_numpy,
                mod_consts[186],
                const_int_0
            );
        } else {
            tmp_assign_source_69 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_56, mod_consts[186]);
        }

        if (tmp_assign_source_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_import_name_from_57;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_57 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_57)) {
            tmp_assign_source_70 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_57,
                (PyObject *)moduledict_numpy,
                mod_consts[187],
                const_int_0
            );
        } else {
            tmp_assign_source_70 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_57, mod_consts[187]);
        }

        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_import_name_from_58;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_58 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_58)) {
            tmp_assign_source_71 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_58,
                (PyObject *)moduledict_numpy,
                mod_consts[188],
                const_int_0
            );
        } else {
            tmp_assign_source_71 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_58, mod_consts[188]);
        }

        if (tmp_assign_source_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_import_name_from_59;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_59 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_59)) {
            tmp_assign_source_72 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_59,
                (PyObject *)moduledict_numpy,
                mod_consts[189],
                const_int_0
            );
        } else {
            tmp_assign_source_72 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_59, mod_consts[189]);
        }

        if (tmp_assign_source_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_import_name_from_60;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_60 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_60)) {
            tmp_assign_source_73 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_60,
                (PyObject *)moduledict_numpy,
                mod_consts[190],
                const_int_0
            );
        } else {
            tmp_assign_source_73 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_60, mod_consts[190]);
        }

        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_import_name_from_61;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_61 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_61)) {
            tmp_assign_source_74 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_61,
                (PyObject *)moduledict_numpy,
                mod_consts[191],
                const_int_0
            );
        } else {
            tmp_assign_source_74 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_61, mod_consts[191]);
        }

        if (tmp_assign_source_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_import_name_from_62;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_62 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_62)) {
            tmp_assign_source_75 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_62,
                (PyObject *)moduledict_numpy,
                mod_consts[192],
                const_int_0
            );
        } else {
            tmp_assign_source_75 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_62, mod_consts[192]);
        }

        if (tmp_assign_source_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_import_name_from_63;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_63 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_63)) {
            tmp_assign_source_76 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_63,
                (PyObject *)moduledict_numpy,
                mod_consts[193],
                const_int_0
            );
        } else {
            tmp_assign_source_76 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_63, mod_consts[193]);
        }

        if (tmp_assign_source_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_import_name_from_64;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_64 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_64)) {
            tmp_assign_source_77 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_64,
                (PyObject *)moduledict_numpy,
                mod_consts[194],
                const_int_0
            );
        } else {
            tmp_assign_source_77 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_64, mod_consts[194]);
        }

        if (tmp_assign_source_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_import_name_from_65;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_65 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_65)) {
            tmp_assign_source_78 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_65,
                (PyObject *)moduledict_numpy,
                mod_consts[195],
                const_int_0
            );
        } else {
            tmp_assign_source_78 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_65, mod_consts[195]);
        }

        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_import_name_from_66;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_66 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_66)) {
            tmp_assign_source_79 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_66,
                (PyObject *)moduledict_numpy,
                mod_consts[196],
                const_int_0
            );
        } else {
            tmp_assign_source_79 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_66, mod_consts[196]);
        }

        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_import_name_from_67;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_67 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_67)) {
            tmp_assign_source_80 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_67,
                (PyObject *)moduledict_numpy,
                mod_consts[197],
                const_int_0
            );
        } else {
            tmp_assign_source_80 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_67, mod_consts[197]);
        }

        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_import_name_from_68;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_68 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_68)) {
            tmp_assign_source_81 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_68,
                (PyObject *)moduledict_numpy,
                mod_consts[198],
                const_int_0
            );
        } else {
            tmp_assign_source_81 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_68, mod_consts[198]);
        }

        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_import_name_from_69;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_69 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_69)) {
            tmp_assign_source_82 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_69,
                (PyObject *)moduledict_numpy,
                mod_consts[199],
                const_int_0
            );
        } else {
            tmp_assign_source_82 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_69, mod_consts[199]);
        }

        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_import_name_from_70;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_70 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_70)) {
            tmp_assign_source_83 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_70,
                (PyObject *)moduledict_numpy,
                mod_consts[200],
                const_int_0
            );
        } else {
            tmp_assign_source_83 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_70, mod_consts[200]);
        }

        if (tmp_assign_source_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_import_name_from_71;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_71 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_71)) {
            tmp_assign_source_84 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_71,
                (PyObject *)moduledict_numpy,
                mod_consts[201],
                const_int_0
            );
        } else {
            tmp_assign_source_84 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_71, mod_consts[201]);
        }

        if (tmp_assign_source_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_import_name_from_72;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_72 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_72)) {
            tmp_assign_source_85 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_72,
                (PyObject *)moduledict_numpy,
                mod_consts[202],
                const_int_0
            );
        } else {
            tmp_assign_source_85 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_72, mod_consts[202]);
        }

        if (tmp_assign_source_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_import_name_from_73;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_73 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_73)) {
            tmp_assign_source_86 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_73,
                (PyObject *)moduledict_numpy,
                mod_consts[203],
                const_int_0
            );
        } else {
            tmp_assign_source_86 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_73, mod_consts[203]);
        }

        if (tmp_assign_source_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_import_name_from_74;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_74 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_74)) {
            tmp_assign_source_87 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_74,
                (PyObject *)moduledict_numpy,
                mod_consts[204],
                const_int_0
            );
        } else {
            tmp_assign_source_87 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_74, mod_consts[204]);
        }

        if (tmp_assign_source_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_import_name_from_75;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_75 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_75)) {
            tmp_assign_source_88 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_75,
                (PyObject *)moduledict_numpy,
                mod_consts[205],
                const_int_0
            );
        } else {
            tmp_assign_source_88 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_75, mod_consts[205]);
        }

        if (tmp_assign_source_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_import_name_from_76;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_76 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_76)) {
            tmp_assign_source_89 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_76,
                (PyObject *)moduledict_numpy,
                mod_consts[206],
                const_int_0
            );
        } else {
            tmp_assign_source_89 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_76, mod_consts[206]);
        }

        if (tmp_assign_source_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_import_name_from_77;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_77 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_77)) {
            tmp_assign_source_90 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_77,
                (PyObject *)moduledict_numpy,
                mod_consts[207],
                const_int_0
            );
        } else {
            tmp_assign_source_90 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_77, mod_consts[207]);
        }

        if (tmp_assign_source_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_import_name_from_78;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_78 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_78)) {
            tmp_assign_source_91 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_78,
                (PyObject *)moduledict_numpy,
                mod_consts[208],
                const_int_0
            );
        } else {
            tmp_assign_source_91 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_78, mod_consts[208]);
        }

        if (tmp_assign_source_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_import_name_from_79;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_79 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_79)) {
            tmp_assign_source_92 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_79,
                (PyObject *)moduledict_numpy,
                mod_consts[209],
                const_int_0
            );
        } else {
            tmp_assign_source_92 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_79, mod_consts[209]);
        }

        if (tmp_assign_source_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_import_name_from_80;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_80 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_80)) {
            tmp_assign_source_93 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_80,
                (PyObject *)moduledict_numpy,
                mod_consts[210],
                const_int_0
            );
        } else {
            tmp_assign_source_93 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_80, mod_consts[210]);
        }

        if (tmp_assign_source_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_import_name_from_81;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_81 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_81)) {
            tmp_assign_source_94 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_81,
                (PyObject *)moduledict_numpy,
                mod_consts[211],
                const_int_0
            );
        } else {
            tmp_assign_source_94 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_81, mod_consts[211]);
        }

        if (tmp_assign_source_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_import_name_from_82;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_82 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_82)) {
            tmp_assign_source_95 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_82,
                (PyObject *)moduledict_numpy,
                mod_consts[212],
                const_int_0
            );
        } else {
            tmp_assign_source_95 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_82, mod_consts[212]);
        }

        if (tmp_assign_source_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_import_name_from_83;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_83 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_83)) {
            tmp_assign_source_96 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_83,
                (PyObject *)moduledict_numpy,
                mod_consts[213],
                const_int_0
            );
        } else {
            tmp_assign_source_96 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_83, mod_consts[213]);
        }

        if (tmp_assign_source_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_import_name_from_84;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_84 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_84)) {
            tmp_assign_source_97 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_84,
                (PyObject *)moduledict_numpy,
                mod_consts[214],
                const_int_0
            );
        } else {
            tmp_assign_source_97 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_84, mod_consts[214]);
        }

        if (tmp_assign_source_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_import_name_from_85;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_85 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_85)) {
            tmp_assign_source_98 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_85,
                (PyObject *)moduledict_numpy,
                mod_consts[215],
                const_int_0
            );
        } else {
            tmp_assign_source_98 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_85, mod_consts[215]);
        }

        if (tmp_assign_source_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_import_name_from_86;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_86 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_86)) {
            tmp_assign_source_99 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_86,
                (PyObject *)moduledict_numpy,
                mod_consts[216],
                const_int_0
            );
        } else {
            tmp_assign_source_99 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_86, mod_consts[216]);
        }

        if (tmp_assign_source_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_import_name_from_87;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_87 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_87)) {
            tmp_assign_source_100 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_87,
                (PyObject *)moduledict_numpy,
                mod_consts[217],
                const_int_0
            );
        } else {
            tmp_assign_source_100 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_87, mod_consts[217]);
        }

        if (tmp_assign_source_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_import_name_from_88;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_88 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_88)) {
            tmp_assign_source_101 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_88,
                (PyObject *)moduledict_numpy,
                mod_consts[218],
                const_int_0
            );
        } else {
            tmp_assign_source_101 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_88, mod_consts[218]);
        }

        if (tmp_assign_source_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_import_name_from_89;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_89 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_89)) {
            tmp_assign_source_102 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_89,
                (PyObject *)moduledict_numpy,
                mod_consts[219],
                const_int_0
            );
        } else {
            tmp_assign_source_102 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_89, mod_consts[219]);
        }

        if (tmp_assign_source_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_import_name_from_90;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_90 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_90)) {
            tmp_assign_source_103 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_90,
                (PyObject *)moduledict_numpy,
                mod_consts[220],
                const_int_0
            );
        } else {
            tmp_assign_source_103 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_90, mod_consts[220]);
        }

        if (tmp_assign_source_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_import_name_from_91;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_91 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_91)) {
            tmp_assign_source_104 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_91,
                (PyObject *)moduledict_numpy,
                mod_consts[221],
                const_int_0
            );
        } else {
            tmp_assign_source_104 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_91, mod_consts[221]);
        }

        if (tmp_assign_source_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_import_name_from_92;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_92 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_92)) {
            tmp_assign_source_105 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_92,
                (PyObject *)moduledict_numpy,
                mod_consts[222],
                const_int_0
            );
        } else {
            tmp_assign_source_105 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_92, mod_consts[222]);
        }

        if (tmp_assign_source_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_import_name_from_93;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_93 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_93)) {
            tmp_assign_source_106 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_93,
                (PyObject *)moduledict_numpy,
                mod_consts[223],
                const_int_0
            );
        } else {
            tmp_assign_source_106 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_93, mod_consts[223]);
        }

        if (tmp_assign_source_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_import_name_from_94;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_94 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_94)) {
            tmp_assign_source_107 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_94,
                (PyObject *)moduledict_numpy,
                mod_consts[224],
                const_int_0
            );
        } else {
            tmp_assign_source_107 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_94, mod_consts[224]);
        }

        if (tmp_assign_source_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_import_name_from_95;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_95 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_95)) {
            tmp_assign_source_108 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_95,
                (PyObject *)moduledict_numpy,
                mod_consts[225],
                const_int_0
            );
        } else {
            tmp_assign_source_108 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_95, mod_consts[225]);
        }

        if (tmp_assign_source_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_import_name_from_96;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_96 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_96)) {
            tmp_assign_source_109 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_96,
                (PyObject *)moduledict_numpy,
                mod_consts[226],
                const_int_0
            );
        } else {
            tmp_assign_source_109 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_96, mod_consts[226]);
        }

        if (tmp_assign_source_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_import_name_from_97;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_97 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_97)) {
            tmp_assign_source_110 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_97,
                (PyObject *)moduledict_numpy,
                mod_consts[227],
                const_int_0
            );
        } else {
            tmp_assign_source_110 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_97, mod_consts[227]);
        }

        if (tmp_assign_source_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_import_name_from_98;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_98 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_98)) {
            tmp_assign_source_111 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_98,
                (PyObject *)moduledict_numpy,
                mod_consts[228],
                const_int_0
            );
        } else {
            tmp_assign_source_111 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_98, mod_consts[228]);
        }

        if (tmp_assign_source_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_import_name_from_99;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_99 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_99)) {
            tmp_assign_source_112 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_99,
                (PyObject *)moduledict_numpy,
                mod_consts[229],
                const_int_0
            );
        } else {
            tmp_assign_source_112 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_99, mod_consts[229]);
        }

        if (tmp_assign_source_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_import_name_from_100;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_100 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_100)) {
            tmp_assign_source_113 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_100,
                (PyObject *)moduledict_numpy,
                mod_consts[230],
                const_int_0
            );
        } else {
            tmp_assign_source_113 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_100, mod_consts[230]);
        }

        if (tmp_assign_source_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_import_name_from_101;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_101 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_101)) {
            tmp_assign_source_114 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_101,
                (PyObject *)moduledict_numpy,
                mod_consts[231],
                const_int_0
            );
        } else {
            tmp_assign_source_114 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_101, mod_consts[231]);
        }

        if (tmp_assign_source_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_import_name_from_102;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_102 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_102)) {
            tmp_assign_source_115 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_102,
                (PyObject *)moduledict_numpy,
                mod_consts[232],
                const_int_0
            );
        } else {
            tmp_assign_source_115 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_102, mod_consts[232]);
        }

        if (tmp_assign_source_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_import_name_from_103;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_103 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_103)) {
            tmp_assign_source_116 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_103,
                (PyObject *)moduledict_numpy,
                mod_consts[233],
                const_int_0
            );
        } else {
            tmp_assign_source_116 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_103, mod_consts[233]);
        }

        if (tmp_assign_source_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_import_name_from_104;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_104 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_104)) {
            tmp_assign_source_117 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_104,
                (PyObject *)moduledict_numpy,
                mod_consts[234],
                const_int_0
            );
        } else {
            tmp_assign_source_117 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_104, mod_consts[234]);
        }

        if (tmp_assign_source_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_import_name_from_105;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_105 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_105)) {
            tmp_assign_source_118 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_105,
                (PyObject *)moduledict_numpy,
                mod_consts[235],
                const_int_0
            );
        } else {
            tmp_assign_source_118 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_105, mod_consts[235]);
        }

        if (tmp_assign_source_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_import_name_from_106;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_106 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_106)) {
            tmp_assign_source_119 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_106,
                (PyObject *)moduledict_numpy,
                mod_consts[236],
                const_int_0
            );
        } else {
            tmp_assign_source_119 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_106, mod_consts[236]);
        }

        if (tmp_assign_source_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_import_name_from_107;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_107 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_107)) {
            tmp_assign_source_120 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_107,
                (PyObject *)moduledict_numpy,
                mod_consts[237],
                const_int_0
            );
        } else {
            tmp_assign_source_120 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_107, mod_consts[237]);
        }

        if (tmp_assign_source_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_import_name_from_108;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_108 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_108)) {
            tmp_assign_source_121 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_108,
                (PyObject *)moduledict_numpy,
                mod_consts[238],
                const_int_0
            );
        } else {
            tmp_assign_source_121 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_108, mod_consts[238]);
        }

        if (tmp_assign_source_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_import_name_from_109;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_109 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_109)) {
            tmp_assign_source_122 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_109,
                (PyObject *)moduledict_numpy,
                mod_consts[239],
                const_int_0
            );
        } else {
            tmp_assign_source_122 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_109, mod_consts[239]);
        }

        if (tmp_assign_source_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_import_name_from_110;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_110 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_110)) {
            tmp_assign_source_123 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_110,
                (PyObject *)moduledict_numpy,
                mod_consts[240],
                const_int_0
            );
        } else {
            tmp_assign_source_123 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_110, mod_consts[240]);
        }

        if (tmp_assign_source_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_import_name_from_111;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_111 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_111)) {
            tmp_assign_source_124 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_111,
                (PyObject *)moduledict_numpy,
                mod_consts[67],
                const_int_0
            );
        } else {
            tmp_assign_source_124 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_111, mod_consts[67]);
        }

        if (tmp_assign_source_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_import_name_from_112;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_112 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_112)) {
            tmp_assign_source_125 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_112,
                (PyObject *)moduledict_numpy,
                mod_consts[241],
                const_int_0
            );
        } else {
            tmp_assign_source_125 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_112, mod_consts[241]);
        }

        if (tmp_assign_source_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_import_name_from_113;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_113 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_113)) {
            tmp_assign_source_126 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_113,
                (PyObject *)moduledict_numpy,
                mod_consts[242],
                const_int_0
            );
        } else {
            tmp_assign_source_126 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_113, mod_consts[242]);
        }

        if (tmp_assign_source_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_import_name_from_114;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_114 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_114)) {
            tmp_assign_source_127 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_114,
                (PyObject *)moduledict_numpy,
                mod_consts[135],
                const_int_0
            );
        } else {
            tmp_assign_source_127 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_114, mod_consts[135]);
        }

        if (tmp_assign_source_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_import_name_from_115;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_115 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_115)) {
            tmp_assign_source_128 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_115,
                (PyObject *)moduledict_numpy,
                mod_consts[243],
                const_int_0
            );
        } else {
            tmp_assign_source_128 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_115, mod_consts[243]);
        }

        if (tmp_assign_source_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_import_name_from_116;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_116 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_116)) {
            tmp_assign_source_129 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_116,
                (PyObject *)moduledict_numpy,
                mod_consts[244],
                const_int_0
            );
        } else {
            tmp_assign_source_129 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_116, mod_consts[244]);
        }

        if (tmp_assign_source_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_import_name_from_117;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_117 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_117)) {
            tmp_assign_source_130 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_117,
                (PyObject *)moduledict_numpy,
                mod_consts[245],
                const_int_0
            );
        } else {
            tmp_assign_source_130 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_117, mod_consts[245]);
        }

        if (tmp_assign_source_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_import_name_from_118;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_118 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_118)) {
            tmp_assign_source_131 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_118,
                (PyObject *)moduledict_numpy,
                mod_consts[246],
                const_int_0
            );
        } else {
            tmp_assign_source_131 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_118, mod_consts[246]);
        }

        if (tmp_assign_source_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_import_name_from_119;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_119 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_119)) {
            tmp_assign_source_132 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_119,
                (PyObject *)moduledict_numpy,
                mod_consts[247],
                const_int_0
            );
        } else {
            tmp_assign_source_132 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_119, mod_consts[247]);
        }

        if (tmp_assign_source_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_import_name_from_120;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_120 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_120)) {
            tmp_assign_source_133 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_120,
                (PyObject *)moduledict_numpy,
                mod_consts[248],
                const_int_0
            );
        } else {
            tmp_assign_source_133 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_120, mod_consts[248]);
        }

        if (tmp_assign_source_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_import_name_from_121;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_121 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_121)) {
            tmp_assign_source_134 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_121,
                (PyObject *)moduledict_numpy,
                mod_consts[249],
                const_int_0
            );
        } else {
            tmp_assign_source_134 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_121, mod_consts[249]);
        }

        if (tmp_assign_source_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_import_name_from_122;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_122 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_122)) {
            tmp_assign_source_135 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_122,
                (PyObject *)moduledict_numpy,
                mod_consts[250],
                const_int_0
            );
        } else {
            tmp_assign_source_135 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_122, mod_consts[250]);
        }

        if (tmp_assign_source_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_import_name_from_123;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_123 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_123)) {
            tmp_assign_source_136 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_123,
                (PyObject *)moduledict_numpy,
                mod_consts[251],
                const_int_0
            );
        } else {
            tmp_assign_source_136 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_123, mod_consts[251]);
        }

        if (tmp_assign_source_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_import_name_from_124;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_124 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_124)) {
            tmp_assign_source_137 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_124,
                (PyObject *)moduledict_numpy,
                mod_consts[252],
                const_int_0
            );
        } else {
            tmp_assign_source_137 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_124, mod_consts[252]);
        }

        if (tmp_assign_source_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[252], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_import_name_from_125;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_125 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_125)) {
            tmp_assign_source_138 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_125,
                (PyObject *)moduledict_numpy,
                mod_consts[253],
                const_int_0
            );
        } else {
            tmp_assign_source_138 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_125, mod_consts[253]);
        }

        if (tmp_assign_source_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_import_name_from_126;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_126 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_126)) {
            tmp_assign_source_139 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_126,
                (PyObject *)moduledict_numpy,
                mod_consts[254],
                const_int_0
            );
        } else {
            tmp_assign_source_139 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_126, mod_consts[254]);
        }

        if (tmp_assign_source_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[254], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_import_name_from_127;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_127 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_127)) {
            tmp_assign_source_140 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_127,
                (PyObject *)moduledict_numpy,
                mod_consts[255],
                const_int_0
            );
        } else {
            tmp_assign_source_140 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_127, mod_consts[255]);
        }

        if (tmp_assign_source_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_import_name_from_128;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_128 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_128)) {
            tmp_assign_source_141 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_128,
                (PyObject *)moduledict_numpy,
                mod_consts[256],
                const_int_0
            );
        } else {
            tmp_assign_source_141 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_128, mod_consts[256]);
        }

        if (tmp_assign_source_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_import_name_from_129;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_129 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_129)) {
            tmp_assign_source_142 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_129,
                (PyObject *)moduledict_numpy,
                mod_consts[257],
                const_int_0
            );
        } else {
            tmp_assign_source_142 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_129, mod_consts[257]);
        }

        if (tmp_assign_source_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_import_name_from_130;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_130 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_130)) {
            tmp_assign_source_143 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_130,
                (PyObject *)moduledict_numpy,
                mod_consts[258],
                const_int_0
            );
        } else {
            tmp_assign_source_143 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_130, mod_consts[258]);
        }

        if (tmp_assign_source_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[258], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_import_name_from_131;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_131 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_131)) {
            tmp_assign_source_144 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_131,
                (PyObject *)moduledict_numpy,
                mod_consts[63],
                const_int_0
            );
        } else {
            tmp_assign_source_144 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_131, mod_consts[63]);
        }

        if (tmp_assign_source_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_import_name_from_132;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_132 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_132)) {
            tmp_assign_source_145 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_132,
                (PyObject *)moduledict_numpy,
                mod_consts[259],
                const_int_0
            );
        } else {
            tmp_assign_source_145 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_132, mod_consts[259]);
        }

        if (tmp_assign_source_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_import_name_from_133;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_133 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_133)) {
            tmp_assign_source_146 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_133,
                (PyObject *)moduledict_numpy,
                mod_consts[260],
                const_int_0
            );
        } else {
            tmp_assign_source_146 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_133, mod_consts[260]);
        }

        if (tmp_assign_source_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_import_name_from_134;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_134 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_134)) {
            tmp_assign_source_147 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_134,
                (PyObject *)moduledict_numpy,
                mod_consts[261],
                const_int_0
            );
        } else {
            tmp_assign_source_147 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_134, mod_consts[261]);
        }

        if (tmp_assign_source_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_import_name_from_135;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_135 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_135)) {
            tmp_assign_source_148 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_135,
                (PyObject *)moduledict_numpy,
                mod_consts[262],
                const_int_0
            );
        } else {
            tmp_assign_source_148 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_135, mod_consts[262]);
        }

        if (tmp_assign_source_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_import_name_from_136;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_136 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_136)) {
            tmp_assign_source_149 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_136,
                (PyObject *)moduledict_numpy,
                mod_consts[263],
                const_int_0
            );
        } else {
            tmp_assign_source_149 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_136, mod_consts[263]);
        }

        if (tmp_assign_source_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_import_name_from_137;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_137 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_137)) {
            tmp_assign_source_150 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_137,
                (PyObject *)moduledict_numpy,
                mod_consts[264],
                const_int_0
            );
        } else {
            tmp_assign_source_150 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_137, mod_consts[264]);
        }

        if (tmp_assign_source_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_import_name_from_138;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_138 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_138)) {
            tmp_assign_source_151 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_138,
                (PyObject *)moduledict_numpy,
                mod_consts[265],
                const_int_0
            );
        } else {
            tmp_assign_source_151 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_138, mod_consts[265]);
        }

        if (tmp_assign_source_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[265], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_import_name_from_139;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_139 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_139)) {
            tmp_assign_source_152 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_139,
                (PyObject *)moduledict_numpy,
                mod_consts[266],
                const_int_0
            );
        } else {
            tmp_assign_source_152 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_139, mod_consts[266]);
        }

        if (tmp_assign_source_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[266], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_import_name_from_140;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_140 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_140)) {
            tmp_assign_source_153 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_140,
                (PyObject *)moduledict_numpy,
                mod_consts[267],
                const_int_0
            );
        } else {
            tmp_assign_source_153 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_140, mod_consts[267]);
        }

        if (tmp_assign_source_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_import_name_from_141;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_141 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_141)) {
            tmp_assign_source_154 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_141,
                (PyObject *)moduledict_numpy,
                mod_consts[268],
                const_int_0
            );
        } else {
            tmp_assign_source_154 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_141, mod_consts[268]);
        }

        if (tmp_assign_source_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[268], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_import_name_from_142;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_142 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_142)) {
            tmp_assign_source_155 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_142,
                (PyObject *)moduledict_numpy,
                mod_consts[269],
                const_int_0
            );
        } else {
            tmp_assign_source_155 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_142, mod_consts[269]);
        }

        if (tmp_assign_source_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_import_name_from_143;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_143 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_143)) {
            tmp_assign_source_156 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_143,
                (PyObject *)moduledict_numpy,
                mod_consts[270],
                const_int_0
            );
        } else {
            tmp_assign_source_156 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_143, mod_consts[270]);
        }

        if (tmp_assign_source_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_import_name_from_144;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_144 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_144)) {
            tmp_assign_source_157 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_144,
                (PyObject *)moduledict_numpy,
                mod_consts[271],
                const_int_0
            );
        } else {
            tmp_assign_source_157 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_144, mod_consts[271]);
        }

        if (tmp_assign_source_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_import_name_from_145;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_145 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_145)) {
            tmp_assign_source_158 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_145,
                (PyObject *)moduledict_numpy,
                mod_consts[272],
                const_int_0
            );
        } else {
            tmp_assign_source_158 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_145, mod_consts[272]);
        }

        if (tmp_assign_source_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_import_name_from_146;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_146 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_146)) {
            tmp_assign_source_159 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_146,
                (PyObject *)moduledict_numpy,
                mod_consts[273],
                const_int_0
            );
        } else {
            tmp_assign_source_159 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_146, mod_consts[273]);
        }

        if (tmp_assign_source_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[273], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_import_name_from_147;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_147 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_147)) {
            tmp_assign_source_160 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_147,
                (PyObject *)moduledict_numpy,
                mod_consts[274],
                const_int_0
            );
        } else {
            tmp_assign_source_160 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_147, mod_consts[274]);
        }

        if (tmp_assign_source_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[274], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_import_name_from_148;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_148 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_148)) {
            tmp_assign_source_161 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_148,
                (PyObject *)moduledict_numpy,
                mod_consts[275],
                const_int_0
            );
        } else {
            tmp_assign_source_161 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_148, mod_consts[275]);
        }

        if (tmp_assign_source_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_import_name_from_149;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_149 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_149)) {
            tmp_assign_source_162 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_149,
                (PyObject *)moduledict_numpy,
                mod_consts[276],
                const_int_0
            );
        } else {
            tmp_assign_source_162 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_149, mod_consts[276]);
        }

        if (tmp_assign_source_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[276], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_import_name_from_150;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_150 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_150)) {
            tmp_assign_source_163 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_150,
                (PyObject *)moduledict_numpy,
                mod_consts[277],
                const_int_0
            );
        } else {
            tmp_assign_source_163 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_150, mod_consts[277]);
        }

        if (tmp_assign_source_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_import_name_from_151;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_151 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_151)) {
            tmp_assign_source_164 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_151,
                (PyObject *)moduledict_numpy,
                mod_consts[278],
                const_int_0
            );
        } else {
            tmp_assign_source_164 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_151, mod_consts[278]);
        }

        if (tmp_assign_source_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        PyObject *tmp_import_name_from_152;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_152 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_152)) {
            tmp_assign_source_165 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_152,
                (PyObject *)moduledict_numpy,
                mod_consts[279],
                const_int_0
            );
        } else {
            tmp_assign_source_165 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_152, mod_consts[279]);
        }

        if (tmp_assign_source_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[279], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_import_name_from_153;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_153 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_153)) {
            tmp_assign_source_166 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_153,
                (PyObject *)moduledict_numpy,
                mod_consts[280],
                const_int_0
            );
        } else {
            tmp_assign_source_166 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_153, mod_consts[280]);
        }

        if (tmp_assign_source_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_import_name_from_154;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_154 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_154)) {
            tmp_assign_source_167 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_154,
                (PyObject *)moduledict_numpy,
                mod_consts[281],
                const_int_0
            );
        } else {
            tmp_assign_source_167 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_154, mod_consts[281]);
        }

        if (tmp_assign_source_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_import_name_from_155;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_155 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_155)) {
            tmp_assign_source_168 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_155,
                (PyObject *)moduledict_numpy,
                mod_consts[282],
                const_int_0
            );
        } else {
            tmp_assign_source_168 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_155, mod_consts[282]);
        }

        if (tmp_assign_source_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[282], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        PyObject *tmp_import_name_from_156;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_156 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_156)) {
            tmp_assign_source_169 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_156,
                (PyObject *)moduledict_numpy,
                mod_consts[283],
                const_int_0
            );
        } else {
            tmp_assign_source_169 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_156, mod_consts[283]);
        }

        if (tmp_assign_source_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        PyObject *tmp_import_name_from_157;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_157 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_157)) {
            tmp_assign_source_170 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_157,
                (PyObject *)moduledict_numpy,
                mod_consts[284],
                const_int_0
            );
        } else {
            tmp_assign_source_170 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_157, mod_consts[284]);
        }

        if (tmp_assign_source_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_import_name_from_158;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_158 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_158)) {
            tmp_assign_source_171 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_158,
                (PyObject *)moduledict_numpy,
                mod_consts[285],
                const_int_0
            );
        } else {
            tmp_assign_source_171 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_158, mod_consts[285]);
        }

        if (tmp_assign_source_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_import_name_from_159;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_159 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_159)) {
            tmp_assign_source_172 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_159,
                (PyObject *)moduledict_numpy,
                mod_consts[286],
                const_int_0
            );
        } else {
            tmp_assign_source_172 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_159, mod_consts[286]);
        }

        if (tmp_assign_source_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        PyObject *tmp_import_name_from_160;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_160 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_160)) {
            tmp_assign_source_173 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_160,
                (PyObject *)moduledict_numpy,
                mod_consts[287],
                const_int_0
            );
        } else {
            tmp_assign_source_173 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_160, mod_consts[287]);
        }

        if (tmp_assign_source_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[287], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_import_name_from_161;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_161 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_161)) {
            tmp_assign_source_174 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_161,
                (PyObject *)moduledict_numpy,
                mod_consts[288],
                const_int_0
            );
        } else {
            tmp_assign_source_174 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_161, mod_consts[288]);
        }

        if (tmp_assign_source_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[288], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_import_name_from_162;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_162 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_162)) {
            tmp_assign_source_175 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_162,
                (PyObject *)moduledict_numpy,
                mod_consts[289],
                const_int_0
            );
        } else {
            tmp_assign_source_175 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_162, mod_consts[289]);
        }

        if (tmp_assign_source_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[289], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_import_name_from_163;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_163 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_163)) {
            tmp_assign_source_176 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_163,
                (PyObject *)moduledict_numpy,
                mod_consts[290],
                const_int_0
            );
        } else {
            tmp_assign_source_176 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_163, mod_consts[290]);
        }

        if (tmp_assign_source_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[290], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_import_name_from_164;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_164 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_164)) {
            tmp_assign_source_177 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_164,
                (PyObject *)moduledict_numpy,
                mod_consts[291],
                const_int_0
            );
        } else {
            tmp_assign_source_177 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_164, mod_consts[291]);
        }

        if (tmp_assign_source_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[291], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        PyObject *tmp_import_name_from_165;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_165 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_165)) {
            tmp_assign_source_178 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_165,
                (PyObject *)moduledict_numpy,
                mod_consts[292],
                const_int_0
            );
        } else {
            tmp_assign_source_178 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_165, mod_consts[292]);
        }

        if (tmp_assign_source_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        PyObject *tmp_import_name_from_166;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_166 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_166)) {
            tmp_assign_source_179 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_166,
                (PyObject *)moduledict_numpy,
                mod_consts[293],
                const_int_0
            );
        } else {
            tmp_assign_source_179 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_166, mod_consts[293]);
        }

        if (tmp_assign_source_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[293], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_import_name_from_167;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_167 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_167)) {
            tmp_assign_source_180 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_167,
                (PyObject *)moduledict_numpy,
                mod_consts[294],
                const_int_0
            );
        } else {
            tmp_assign_source_180 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_167, mod_consts[294]);
        }

        if (tmp_assign_source_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[294], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        PyObject *tmp_import_name_from_168;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_168 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_168)) {
            tmp_assign_source_181 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_168,
                (PyObject *)moduledict_numpy,
                mod_consts[295],
                const_int_0
            );
        } else {
            tmp_assign_source_181 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_168, mod_consts[295]);
        }

        if (tmp_assign_source_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[295], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_import_name_from_169;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_169 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_169)) {
            tmp_assign_source_182 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_169,
                (PyObject *)moduledict_numpy,
                mod_consts[296],
                const_int_0
            );
        } else {
            tmp_assign_source_182 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_169, mod_consts[296]);
        }

        if (tmp_assign_source_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[296], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        PyObject *tmp_import_name_from_170;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_170 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_170)) {
            tmp_assign_source_183 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_170,
                (PyObject *)moduledict_numpy,
                mod_consts[297],
                const_int_0
            );
        } else {
            tmp_assign_source_183 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_170, mod_consts[297]);
        }

        if (tmp_assign_source_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[297], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        PyObject *tmp_import_name_from_171;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_171 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_171)) {
            tmp_assign_source_184 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_171,
                (PyObject *)moduledict_numpy,
                mod_consts[298],
                const_int_0
            );
        } else {
            tmp_assign_source_184 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_171, mod_consts[298]);
        }

        if (tmp_assign_source_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[298], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assign_source_185;
        PyObject *tmp_import_name_from_172;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_172 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_172)) {
            tmp_assign_source_185 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_172,
                (PyObject *)moduledict_numpy,
                mod_consts[299],
                const_int_0
            );
        } else {
            tmp_assign_source_185 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_172, mod_consts[299]);
        }

        if (tmp_assign_source_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[299], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        PyObject *tmp_import_name_from_173;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_173 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_173)) {
            tmp_assign_source_186 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_173,
                (PyObject *)moduledict_numpy,
                mod_consts[300],
                const_int_0
            );
        } else {
            tmp_assign_source_186 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_173, mod_consts[300]);
        }

        if (tmp_assign_source_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[300], tmp_assign_source_186);
    }
    {
        PyObject *tmp_assign_source_187;
        PyObject *tmp_import_name_from_174;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_174 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_174)) {
            tmp_assign_source_187 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_174,
                (PyObject *)moduledict_numpy,
                mod_consts[301],
                const_int_0
            );
        } else {
            tmp_assign_source_187 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_174, mod_consts[301]);
        }

        if (tmp_assign_source_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;
        PyObject *tmp_import_name_from_175;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_175 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_175)) {
            tmp_assign_source_188 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_175,
                (PyObject *)moduledict_numpy,
                mod_consts[302],
                const_int_0
            );
        } else {
            tmp_assign_source_188 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_175, mod_consts[302]);
        }

        if (tmp_assign_source_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[302], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;
        PyObject *tmp_import_name_from_176;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_176 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_176)) {
            tmp_assign_source_189 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_176,
                (PyObject *)moduledict_numpy,
                mod_consts[303],
                const_int_0
            );
        } else {
            tmp_assign_source_189 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_176, mod_consts[303]);
        }

        if (tmp_assign_source_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[303], tmp_assign_source_189);
    }
    {
        PyObject *tmp_assign_source_190;
        PyObject *tmp_import_name_from_177;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_177 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_177)) {
            tmp_assign_source_190 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_177,
                (PyObject *)moduledict_numpy,
                mod_consts[304],
                const_int_0
            );
        } else {
            tmp_assign_source_190 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_177, mod_consts[304]);
        }

        if (tmp_assign_source_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[304], tmp_assign_source_190);
    }
    {
        PyObject *tmp_assign_source_191;
        PyObject *tmp_import_name_from_178;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_178 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_178)) {
            tmp_assign_source_191 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_178,
                (PyObject *)moduledict_numpy,
                mod_consts[305],
                const_int_0
            );
        } else {
            tmp_assign_source_191 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_178, mod_consts[305]);
        }

        if (tmp_assign_source_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[305], tmp_assign_source_191);
    }
    {
        PyObject *tmp_assign_source_192;
        PyObject *tmp_import_name_from_179;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_179 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_179)) {
            tmp_assign_source_192 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_179,
                (PyObject *)moduledict_numpy,
                mod_consts[306],
                const_int_0
            );
        } else {
            tmp_assign_source_192 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_179, mod_consts[306]);
        }

        if (tmp_assign_source_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_192);
    }
    {
        PyObject *tmp_assign_source_193;
        PyObject *tmp_import_name_from_180;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_180 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_180)) {
            tmp_assign_source_193 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_180,
                (PyObject *)moduledict_numpy,
                mod_consts[307],
                const_int_0
            );
        } else {
            tmp_assign_source_193 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_180, mod_consts[307]);
        }

        if (tmp_assign_source_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[307], tmp_assign_source_193);
    }
    {
        PyObject *tmp_assign_source_194;
        PyObject *tmp_import_name_from_181;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_181 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_181)) {
            tmp_assign_source_194 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_181,
                (PyObject *)moduledict_numpy,
                mod_consts[308],
                const_int_0
            );
        } else {
            tmp_assign_source_194 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_181, mod_consts[308]);
        }

        if (tmp_assign_source_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[308], tmp_assign_source_194);
    }
    {
        PyObject *tmp_assign_source_195;
        PyObject *tmp_import_name_from_182;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_182 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_182)) {
            tmp_assign_source_195 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_182,
                (PyObject *)moduledict_numpy,
                mod_consts[309],
                const_int_0
            );
        } else {
            tmp_assign_source_195 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_182, mod_consts[309]);
        }

        if (tmp_assign_source_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[309], tmp_assign_source_195);
    }
    {
        PyObject *tmp_assign_source_196;
        PyObject *tmp_import_name_from_183;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_183 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_183)) {
            tmp_assign_source_196 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_183,
                (PyObject *)moduledict_numpy,
                mod_consts[310],
                const_int_0
            );
        } else {
            tmp_assign_source_196 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_183, mod_consts[310]);
        }

        if (tmp_assign_source_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[310], tmp_assign_source_196);
    }
    {
        PyObject *tmp_assign_source_197;
        PyObject *tmp_import_name_from_184;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_184 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_184)) {
            tmp_assign_source_197 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_184,
                (PyObject *)moduledict_numpy,
                mod_consts[311],
                const_int_0
            );
        } else {
            tmp_assign_source_197 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_184, mod_consts[311]);
        }

        if (tmp_assign_source_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[311], tmp_assign_source_197);
    }
    {
        PyObject *tmp_assign_source_198;
        PyObject *tmp_import_name_from_185;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_185 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_185)) {
            tmp_assign_source_198 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_185,
                (PyObject *)moduledict_numpy,
                mod_consts[312],
                const_int_0
            );
        } else {
            tmp_assign_source_198 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_185, mod_consts[312]);
        }

        if (tmp_assign_source_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_198);
    }
    {
        PyObject *tmp_assign_source_199;
        PyObject *tmp_import_name_from_186;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_186 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_186)) {
            tmp_assign_source_199 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_186,
                (PyObject *)moduledict_numpy,
                mod_consts[313],
                const_int_0
            );
        } else {
            tmp_assign_source_199 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_186, mod_consts[313]);
        }

        if (tmp_assign_source_199 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[313], tmp_assign_source_199);
    }
    {
        PyObject *tmp_assign_source_200;
        PyObject *tmp_import_name_from_187;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_187 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_187)) {
            tmp_assign_source_200 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_187,
                (PyObject *)moduledict_numpy,
                mod_consts[314],
                const_int_0
            );
        } else {
            tmp_assign_source_200 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_187, mod_consts[314]);
        }

        if (tmp_assign_source_200 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[314], tmp_assign_source_200);
    }
    {
        PyObject *tmp_assign_source_201;
        PyObject *tmp_import_name_from_188;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_188 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_188)) {
            tmp_assign_source_201 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_188,
                (PyObject *)moduledict_numpy,
                mod_consts[315],
                const_int_0
            );
        } else {
            tmp_assign_source_201 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_188, mod_consts[315]);
        }

        if (tmp_assign_source_201 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[315], tmp_assign_source_201);
    }
    {
        PyObject *tmp_assign_source_202;
        PyObject *tmp_import_name_from_189;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_189 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_189)) {
            tmp_assign_source_202 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_189,
                (PyObject *)moduledict_numpy,
                mod_consts[316],
                const_int_0
            );
        } else {
            tmp_assign_source_202 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_189, mod_consts[316]);
        }

        if (tmp_assign_source_202 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[316], tmp_assign_source_202);
    }
    {
        PyObject *tmp_assign_source_203;
        PyObject *tmp_import_name_from_190;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_190 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_190)) {
            tmp_assign_source_203 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_190,
                (PyObject *)moduledict_numpy,
                mod_consts[317],
                const_int_0
            );
        } else {
            tmp_assign_source_203 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_190, mod_consts[317]);
        }

        if (tmp_assign_source_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[317], tmp_assign_source_203);
    }
    {
        PyObject *tmp_assign_source_204;
        PyObject *tmp_import_name_from_191;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_191 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_191)) {
            tmp_assign_source_204 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_191,
                (PyObject *)moduledict_numpy,
                mod_consts[318],
                const_int_0
            );
        } else {
            tmp_assign_source_204 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_191, mod_consts[318]);
        }

        if (tmp_assign_source_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[318], tmp_assign_source_204);
    }
    {
        PyObject *tmp_assign_source_205;
        PyObject *tmp_import_name_from_192;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_192 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_192)) {
            tmp_assign_source_205 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_192,
                (PyObject *)moduledict_numpy,
                mod_consts[319],
                const_int_0
            );
        } else {
            tmp_assign_source_205 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_192, mod_consts[319]);
        }

        if (tmp_assign_source_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[319], tmp_assign_source_205);
    }
    {
        PyObject *tmp_assign_source_206;
        PyObject *tmp_import_name_from_193;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_193 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_193)) {
            tmp_assign_source_206 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_193,
                (PyObject *)moduledict_numpy,
                mod_consts[320],
                const_int_0
            );
        } else {
            tmp_assign_source_206 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_193, mod_consts[320]);
        }

        if (tmp_assign_source_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[320], tmp_assign_source_206);
    }
    {
        PyObject *tmp_assign_source_207;
        PyObject *tmp_import_name_from_194;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_194 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_194)) {
            tmp_assign_source_207 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_194,
                (PyObject *)moduledict_numpy,
                mod_consts[321],
                const_int_0
            );
        } else {
            tmp_assign_source_207 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_194, mod_consts[321]);
        }

        if (tmp_assign_source_207 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[321], tmp_assign_source_207);
    }
    {
        PyObject *tmp_assign_source_208;
        PyObject *tmp_import_name_from_195;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_195 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_195)) {
            tmp_assign_source_208 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_195,
                (PyObject *)moduledict_numpy,
                mod_consts[322],
                const_int_0
            );
        } else {
            tmp_assign_source_208 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_195, mod_consts[322]);
        }

        if (tmp_assign_source_208 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[322], tmp_assign_source_208);
    }
    {
        PyObject *tmp_assign_source_209;
        PyObject *tmp_import_name_from_196;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_196 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_196)) {
            tmp_assign_source_209 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_196,
                (PyObject *)moduledict_numpy,
                mod_consts[76],
                const_int_0
            );
        } else {
            tmp_assign_source_209 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_196, mod_consts[76]);
        }

        if (tmp_assign_source_209 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_209);
    }
    {
        PyObject *tmp_assign_source_210;
        PyObject *tmp_import_name_from_197;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_197 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_197)) {
            tmp_assign_source_210 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_197,
                (PyObject *)moduledict_numpy,
                mod_consts[323],
                const_int_0
            );
        } else {
            tmp_assign_source_210 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_197, mod_consts[323]);
        }

        if (tmp_assign_source_210 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[323], tmp_assign_source_210);
    }
    {
        PyObject *tmp_assign_source_211;
        PyObject *tmp_import_name_from_198;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_198 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_198)) {
            tmp_assign_source_211 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_198,
                (PyObject *)moduledict_numpy,
                mod_consts[324],
                const_int_0
            );
        } else {
            tmp_assign_source_211 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_198, mod_consts[324]);
        }

        if (tmp_assign_source_211 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[324], tmp_assign_source_211);
    }
    {
        PyObject *tmp_assign_source_212;
        PyObject *tmp_import_name_from_199;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_199 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_199)) {
            tmp_assign_source_212 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_199,
                (PyObject *)moduledict_numpy,
                mod_consts[325],
                const_int_0
            );
        } else {
            tmp_assign_source_212 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_199, mod_consts[325]);
        }

        if (tmp_assign_source_212 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[325], tmp_assign_source_212);
    }
    {
        PyObject *tmp_assign_source_213;
        PyObject *tmp_import_name_from_200;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_200 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_200)) {
            tmp_assign_source_213 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_200,
                (PyObject *)moduledict_numpy,
                mod_consts[326],
                const_int_0
            );
        } else {
            tmp_assign_source_213 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_200, mod_consts[326]);
        }

        if (tmp_assign_source_213 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[326], tmp_assign_source_213);
    }
    {
        PyObject *tmp_assign_source_214;
        PyObject *tmp_import_name_from_201;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_201 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_201)) {
            tmp_assign_source_214 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_201,
                (PyObject *)moduledict_numpy,
                mod_consts[327],
                const_int_0
            );
        } else {
            tmp_assign_source_214 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_201, mod_consts[327]);
        }

        if (tmp_assign_source_214 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[327], tmp_assign_source_214);
    }
    {
        PyObject *tmp_assign_source_215;
        PyObject *tmp_import_name_from_202;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_202 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_202)) {
            tmp_assign_source_215 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_202,
                (PyObject *)moduledict_numpy,
                mod_consts[328],
                const_int_0
            );
        } else {
            tmp_assign_source_215 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_202, mod_consts[328]);
        }

        if (tmp_assign_source_215 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[328], tmp_assign_source_215);
    }
    {
        PyObject *tmp_assign_source_216;
        PyObject *tmp_import_name_from_203;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_203 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_203)) {
            tmp_assign_source_216 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_203,
                (PyObject *)moduledict_numpy,
                mod_consts[329],
                const_int_0
            );
        } else {
            tmp_assign_source_216 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_203, mod_consts[329]);
        }

        if (tmp_assign_source_216 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[329], tmp_assign_source_216);
    }
    {
        PyObject *tmp_assign_source_217;
        PyObject *tmp_import_name_from_204;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_204 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_204)) {
            tmp_assign_source_217 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_204,
                (PyObject *)moduledict_numpy,
                mod_consts[330],
                const_int_0
            );
        } else {
            tmp_assign_source_217 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_204, mod_consts[330]);
        }

        if (tmp_assign_source_217 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[330], tmp_assign_source_217);
    }
    {
        PyObject *tmp_assign_source_218;
        PyObject *tmp_import_name_from_205;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_205 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_205)) {
            tmp_assign_source_218 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_205,
                (PyObject *)moduledict_numpy,
                mod_consts[331],
                const_int_0
            );
        } else {
            tmp_assign_source_218 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_205, mod_consts[331]);
        }

        if (tmp_assign_source_218 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[331], tmp_assign_source_218);
    }
    {
        PyObject *tmp_assign_source_219;
        PyObject *tmp_import_name_from_206;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_206 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_206)) {
            tmp_assign_source_219 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_206,
                (PyObject *)moduledict_numpy,
                mod_consts[332],
                const_int_0
            );
        } else {
            tmp_assign_source_219 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_206, mod_consts[332]);
        }

        if (tmp_assign_source_219 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[332], tmp_assign_source_219);
    }
    {
        PyObject *tmp_assign_source_220;
        PyObject *tmp_import_name_from_207;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_207 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_207)) {
            tmp_assign_source_220 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_207,
                (PyObject *)moduledict_numpy,
                mod_consts[333],
                const_int_0
            );
        } else {
            tmp_assign_source_220 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_207, mod_consts[333]);
        }

        if (tmp_assign_source_220 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[333], tmp_assign_source_220);
    }
    {
        PyObject *tmp_assign_source_221;
        PyObject *tmp_import_name_from_208;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_208 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_208)) {
            tmp_assign_source_221 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_208,
                (PyObject *)moduledict_numpy,
                mod_consts[334],
                const_int_0
            );
        } else {
            tmp_assign_source_221 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_208, mod_consts[334]);
        }

        if (tmp_assign_source_221 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[334], tmp_assign_source_221);
    }
    {
        PyObject *tmp_assign_source_222;
        PyObject *tmp_import_name_from_209;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_209 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_209)) {
            tmp_assign_source_222 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_209,
                (PyObject *)moduledict_numpy,
                mod_consts[335],
                const_int_0
            );
        } else {
            tmp_assign_source_222 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_209, mod_consts[335]);
        }

        if (tmp_assign_source_222 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[335], tmp_assign_source_222);
    }
    {
        PyObject *tmp_assign_source_223;
        PyObject *tmp_import_name_from_210;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_210 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_210)) {
            tmp_assign_source_223 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_210,
                (PyObject *)moduledict_numpy,
                mod_consts[336],
                const_int_0
            );
        } else {
            tmp_assign_source_223 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_210, mod_consts[336]);
        }

        if (tmp_assign_source_223 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[336], tmp_assign_source_223);
    }
    {
        PyObject *tmp_assign_source_224;
        PyObject *tmp_import_name_from_211;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_211 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_211)) {
            tmp_assign_source_224 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_211,
                (PyObject *)moduledict_numpy,
                mod_consts[337],
                const_int_0
            );
        } else {
            tmp_assign_source_224 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_211, mod_consts[337]);
        }

        if (tmp_assign_source_224 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[337], tmp_assign_source_224);
    }
    {
        PyObject *tmp_assign_source_225;
        PyObject *tmp_import_name_from_212;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_212 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_212)) {
            tmp_assign_source_225 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_212,
                (PyObject *)moduledict_numpy,
                mod_consts[338],
                const_int_0
            );
        } else {
            tmp_assign_source_225 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_212, mod_consts[338]);
        }

        if (tmp_assign_source_225 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[338], tmp_assign_source_225);
    }
    {
        PyObject *tmp_assign_source_226;
        PyObject *tmp_import_name_from_213;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_213 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_213)) {
            tmp_assign_source_226 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_213,
                (PyObject *)moduledict_numpy,
                mod_consts[339],
                const_int_0
            );
        } else {
            tmp_assign_source_226 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_213, mod_consts[339]);
        }

        if (tmp_assign_source_226 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[339], tmp_assign_source_226);
    }
    {
        PyObject *tmp_assign_source_227;
        PyObject *tmp_import_name_from_214;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_214 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_214)) {
            tmp_assign_source_227 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_214,
                (PyObject *)moduledict_numpy,
                mod_consts[340],
                const_int_0
            );
        } else {
            tmp_assign_source_227 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_214, mod_consts[340]);
        }

        if (tmp_assign_source_227 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[340], tmp_assign_source_227);
    }
    {
        PyObject *tmp_assign_source_228;
        PyObject *tmp_import_name_from_215;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_215 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_215)) {
            tmp_assign_source_228 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_215,
                (PyObject *)moduledict_numpy,
                mod_consts[341],
                const_int_0
            );
        } else {
            tmp_assign_source_228 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_215, mod_consts[341]);
        }

        if (tmp_assign_source_228 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[341], tmp_assign_source_228);
    }
    {
        PyObject *tmp_assign_source_229;
        PyObject *tmp_import_name_from_216;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_216 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_216)) {
            tmp_assign_source_229 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_216,
                (PyObject *)moduledict_numpy,
                mod_consts[342],
                const_int_0
            );
        } else {
            tmp_assign_source_229 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_216, mod_consts[342]);
        }

        if (tmp_assign_source_229 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[342], tmp_assign_source_229);
    }
    {
        PyObject *tmp_assign_source_230;
        PyObject *tmp_import_name_from_217;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_217 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_217)) {
            tmp_assign_source_230 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_217,
                (PyObject *)moduledict_numpy,
                mod_consts[343],
                const_int_0
            );
        } else {
            tmp_assign_source_230 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_217, mod_consts[343]);
        }

        if (tmp_assign_source_230 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[343], tmp_assign_source_230);
    }
    {
        PyObject *tmp_assign_source_231;
        PyObject *tmp_import_name_from_218;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_218 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_218)) {
            tmp_assign_source_231 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_218,
                (PyObject *)moduledict_numpy,
                mod_consts[344],
                const_int_0
            );
        } else {
            tmp_assign_source_231 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_218, mod_consts[344]);
        }

        if (tmp_assign_source_231 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[344], tmp_assign_source_231);
    }
    {
        PyObject *tmp_assign_source_232;
        PyObject *tmp_import_name_from_219;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_219 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_219)) {
            tmp_assign_source_232 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_219,
                (PyObject *)moduledict_numpy,
                mod_consts[345],
                const_int_0
            );
        } else {
            tmp_assign_source_232 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_219, mod_consts[345]);
        }

        if (tmp_assign_source_232 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[345], tmp_assign_source_232);
    }
    {
        PyObject *tmp_assign_source_233;
        PyObject *tmp_import_name_from_220;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_220 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_220)) {
            tmp_assign_source_233 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_220,
                (PyObject *)moduledict_numpy,
                mod_consts[346],
                const_int_0
            );
        } else {
            tmp_assign_source_233 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_220, mod_consts[346]);
        }

        if (tmp_assign_source_233 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[346], tmp_assign_source_233);
    }
    {
        PyObject *tmp_assign_source_234;
        PyObject *tmp_import_name_from_221;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_221 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_221)) {
            tmp_assign_source_234 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_221,
                (PyObject *)moduledict_numpy,
                mod_consts[347],
                const_int_0
            );
        } else {
            tmp_assign_source_234 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_221, mod_consts[347]);
        }

        if (tmp_assign_source_234 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[347], tmp_assign_source_234);
    }
    {
        PyObject *tmp_assign_source_235;
        PyObject *tmp_import_name_from_222;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_222 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_222)) {
            tmp_assign_source_235 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_222,
                (PyObject *)moduledict_numpy,
                mod_consts[348],
                const_int_0
            );
        } else {
            tmp_assign_source_235 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_222, mod_consts[348]);
        }

        if (tmp_assign_source_235 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[348], tmp_assign_source_235);
    }
    {
        PyObject *tmp_assign_source_236;
        PyObject *tmp_import_name_from_223;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_223 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_223)) {
            tmp_assign_source_236 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_223,
                (PyObject *)moduledict_numpy,
                mod_consts[349],
                const_int_0
            );
        } else {
            tmp_assign_source_236 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_223, mod_consts[349]);
        }

        if (tmp_assign_source_236 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[349], tmp_assign_source_236);
    }
    {
        PyObject *tmp_assign_source_237;
        PyObject *tmp_import_name_from_224;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_224 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_224)) {
            tmp_assign_source_237 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_224,
                (PyObject *)moduledict_numpy,
                mod_consts[350],
                const_int_0
            );
        } else {
            tmp_assign_source_237 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_224, mod_consts[350]);
        }

        if (tmp_assign_source_237 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[350], tmp_assign_source_237);
    }
    {
        PyObject *tmp_assign_source_238;
        PyObject *tmp_import_name_from_225;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_225 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_225)) {
            tmp_assign_source_238 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_225,
                (PyObject *)moduledict_numpy,
                mod_consts[351],
                const_int_0
            );
        } else {
            tmp_assign_source_238 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_225, mod_consts[351]);
        }

        if (tmp_assign_source_238 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[351], tmp_assign_source_238);
    }
    {
        PyObject *tmp_assign_source_239;
        PyObject *tmp_import_name_from_226;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_226 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_226)) {
            tmp_assign_source_239 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_226,
                (PyObject *)moduledict_numpy,
                mod_consts[352],
                const_int_0
            );
        } else {
            tmp_assign_source_239 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_226, mod_consts[352]);
        }

        if (tmp_assign_source_239 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[352], tmp_assign_source_239);
    }
    {
        PyObject *tmp_assign_source_240;
        PyObject *tmp_import_name_from_227;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_227 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_227)) {
            tmp_assign_source_240 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_227,
                (PyObject *)moduledict_numpy,
                mod_consts[353],
                const_int_0
            );
        } else {
            tmp_assign_source_240 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_227, mod_consts[353]);
        }

        if (tmp_assign_source_240 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[353], tmp_assign_source_240);
    }
    {
        PyObject *tmp_assign_source_241;
        PyObject *tmp_import_name_from_228;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_228 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_228)) {
            tmp_assign_source_241 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_228,
                (PyObject *)moduledict_numpy,
                mod_consts[354],
                const_int_0
            );
        } else {
            tmp_assign_source_241 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_228, mod_consts[354]);
        }

        if (tmp_assign_source_241 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[354], tmp_assign_source_241);
    }
    {
        PyObject *tmp_assign_source_242;
        PyObject *tmp_import_name_from_229;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_229 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_229)) {
            tmp_assign_source_242 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_229,
                (PyObject *)moduledict_numpy,
                mod_consts[355],
                const_int_0
            );
        } else {
            tmp_assign_source_242 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_229, mod_consts[355]);
        }

        if (tmp_assign_source_242 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[355], tmp_assign_source_242);
    }
    {
        PyObject *tmp_assign_source_243;
        PyObject *tmp_import_name_from_230;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_230 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_230)) {
            tmp_assign_source_243 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_230,
                (PyObject *)moduledict_numpy,
                mod_consts[356],
                const_int_0
            );
        } else {
            tmp_assign_source_243 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_230, mod_consts[356]);
        }

        if (tmp_assign_source_243 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[356], tmp_assign_source_243);
    }
    {
        PyObject *tmp_assign_source_244;
        PyObject *tmp_import_name_from_231;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_231 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_231)) {
            tmp_assign_source_244 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_231,
                (PyObject *)moduledict_numpy,
                mod_consts[357],
                const_int_0
            );
        } else {
            tmp_assign_source_244 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_231, mod_consts[357]);
        }

        if (tmp_assign_source_244 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[357], tmp_assign_source_244);
    }
    {
        PyObject *tmp_assign_source_245;
        PyObject *tmp_import_name_from_232;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_232 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_232)) {
            tmp_assign_source_245 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_232,
                (PyObject *)moduledict_numpy,
                mod_consts[358],
                const_int_0
            );
        } else {
            tmp_assign_source_245 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_232, mod_consts[358]);
        }

        if (tmp_assign_source_245 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[358], tmp_assign_source_245);
    }
    {
        PyObject *tmp_assign_source_246;
        PyObject *tmp_import_name_from_233;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_233 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_233)) {
            tmp_assign_source_246 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_233,
                (PyObject *)moduledict_numpy,
                mod_consts[359],
                const_int_0
            );
        } else {
            tmp_assign_source_246 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_233, mod_consts[359]);
        }

        if (tmp_assign_source_246 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[359], tmp_assign_source_246);
    }
    {
        PyObject *tmp_assign_source_247;
        PyObject *tmp_import_name_from_234;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_234 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_234)) {
            tmp_assign_source_247 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_234,
                (PyObject *)moduledict_numpy,
                mod_consts[360],
                const_int_0
            );
        } else {
            tmp_assign_source_247 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_234, mod_consts[360]);
        }

        if (tmp_assign_source_247 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[360], tmp_assign_source_247);
    }
    {
        PyObject *tmp_assign_source_248;
        PyObject *tmp_import_name_from_235;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_235 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_235)) {
            tmp_assign_source_248 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_235,
                (PyObject *)moduledict_numpy,
                mod_consts[361],
                const_int_0
            );
        } else {
            tmp_assign_source_248 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_235, mod_consts[361]);
        }

        if (tmp_assign_source_248 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[361], tmp_assign_source_248);
    }
    {
        PyObject *tmp_assign_source_249;
        PyObject *tmp_import_name_from_236;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_236 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_236)) {
            tmp_assign_source_249 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_236,
                (PyObject *)moduledict_numpy,
                mod_consts[362],
                const_int_0
            );
        } else {
            tmp_assign_source_249 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_236, mod_consts[362]);
        }

        if (tmp_assign_source_249 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[362], tmp_assign_source_249);
    }
    {
        PyObject *tmp_assign_source_250;
        PyObject *tmp_import_name_from_237;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_237 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_237)) {
            tmp_assign_source_250 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_237,
                (PyObject *)moduledict_numpy,
                mod_consts[363],
                const_int_0
            );
        } else {
            tmp_assign_source_250 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_237, mod_consts[363]);
        }

        if (tmp_assign_source_250 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[363], tmp_assign_source_250);
    }
    {
        PyObject *tmp_assign_source_251;
        PyObject *tmp_import_name_from_238;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_238 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_238)) {
            tmp_assign_source_251 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_238,
                (PyObject *)moduledict_numpy,
                mod_consts[364],
                const_int_0
            );
        } else {
            tmp_assign_source_251 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_238, mod_consts[364]);
        }

        if (tmp_assign_source_251 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[364], tmp_assign_source_251);
    }
    {
        PyObject *tmp_assign_source_252;
        PyObject *tmp_import_name_from_239;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_239 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_239)) {
            tmp_assign_source_252 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_239,
                (PyObject *)moduledict_numpy,
                mod_consts[62],
                const_int_0
            );
        } else {
            tmp_assign_source_252 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_239, mod_consts[62]);
        }

        if (tmp_assign_source_252 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_252);
    }
    {
        PyObject *tmp_assign_source_253;
        PyObject *tmp_import_name_from_240;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_240 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_240)) {
            tmp_assign_source_253 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_240,
                (PyObject *)moduledict_numpy,
                mod_consts[365],
                const_int_0
            );
        } else {
            tmp_assign_source_253 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_240, mod_consts[365]);
        }

        if (tmp_assign_source_253 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[365], tmp_assign_source_253);
    }
    {
        PyObject *tmp_assign_source_254;
        PyObject *tmp_import_name_from_241;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_241 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_241)) {
            tmp_assign_source_254 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_241,
                (PyObject *)moduledict_numpy,
                mod_consts[366],
                const_int_0
            );
        } else {
            tmp_assign_source_254 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_241, mod_consts[366]);
        }

        if (tmp_assign_source_254 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[366], tmp_assign_source_254);
    }
    {
        PyObject *tmp_assign_source_255;
        PyObject *tmp_import_name_from_242;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_242 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_242)) {
            tmp_assign_source_255 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_242,
                (PyObject *)moduledict_numpy,
                mod_consts[367],
                const_int_0
            );
        } else {
            tmp_assign_source_255 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_242, mod_consts[367]);
        }

        if (tmp_assign_source_255 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[367], tmp_assign_source_255);
    }
    {
        PyObject *tmp_assign_source_256;
        PyObject *tmp_import_name_from_243;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_243 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_243)) {
            tmp_assign_source_256 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_243,
                (PyObject *)moduledict_numpy,
                mod_consts[368],
                const_int_0
            );
        } else {
            tmp_assign_source_256 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_243, mod_consts[368]);
        }

        if (tmp_assign_source_256 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[368], tmp_assign_source_256);
    }
    {
        PyObject *tmp_assign_source_257;
        PyObject *tmp_import_name_from_244;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_244 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_244)) {
            tmp_assign_source_257 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_244,
                (PyObject *)moduledict_numpy,
                mod_consts[369],
                const_int_0
            );
        } else {
            tmp_assign_source_257 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_244, mod_consts[369]);
        }

        if (tmp_assign_source_257 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[369], tmp_assign_source_257);
    }
    {
        PyObject *tmp_assign_source_258;
        PyObject *tmp_import_name_from_245;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_245 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_245)) {
            tmp_assign_source_258 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_245,
                (PyObject *)moduledict_numpy,
                mod_consts[370],
                const_int_0
            );
        } else {
            tmp_assign_source_258 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_245, mod_consts[370]);
        }

        if (tmp_assign_source_258 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[370], tmp_assign_source_258);
    }
    {
        PyObject *tmp_assign_source_259;
        PyObject *tmp_import_name_from_246;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_246 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_246)) {
            tmp_assign_source_259 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_246,
                (PyObject *)moduledict_numpy,
                mod_consts[371],
                const_int_0
            );
        } else {
            tmp_assign_source_259 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_246, mod_consts[371]);
        }

        if (tmp_assign_source_259 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[371], tmp_assign_source_259);
    }
    {
        PyObject *tmp_assign_source_260;
        PyObject *tmp_import_name_from_247;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_247 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_247)) {
            tmp_assign_source_260 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_247,
                (PyObject *)moduledict_numpy,
                mod_consts[372],
                const_int_0
            );
        } else {
            tmp_assign_source_260 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_247, mod_consts[372]);
        }

        if (tmp_assign_source_260 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[372], tmp_assign_source_260);
    }
    {
        PyObject *tmp_assign_source_261;
        PyObject *tmp_import_name_from_248;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_248 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_248)) {
            tmp_assign_source_261 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_248,
                (PyObject *)moduledict_numpy,
                mod_consts[373],
                const_int_0
            );
        } else {
            tmp_assign_source_261 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_248, mod_consts[373]);
        }

        if (tmp_assign_source_261 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[373], tmp_assign_source_261);
    }
    {
        PyObject *tmp_assign_source_262;
        PyObject *tmp_import_name_from_249;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_249 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_249)) {
            tmp_assign_source_262 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_249,
                (PyObject *)moduledict_numpy,
                mod_consts[374],
                const_int_0
            );
        } else {
            tmp_assign_source_262 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_249, mod_consts[374]);
        }

        if (tmp_assign_source_262 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[374], tmp_assign_source_262);
    }
    {
        PyObject *tmp_assign_source_263;
        PyObject *tmp_import_name_from_250;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_250 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_250)) {
            tmp_assign_source_263 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_250,
                (PyObject *)moduledict_numpy,
                mod_consts[375],
                const_int_0
            );
        } else {
            tmp_assign_source_263 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_250, mod_consts[375]);
        }

        if (tmp_assign_source_263 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[375], tmp_assign_source_263);
    }
    {
        PyObject *tmp_assign_source_264;
        PyObject *tmp_import_name_from_251;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_251 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_251)) {
            tmp_assign_source_264 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_251,
                (PyObject *)moduledict_numpy,
                mod_consts[376],
                const_int_0
            );
        } else {
            tmp_assign_source_264 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_251, mod_consts[376]);
        }

        if (tmp_assign_source_264 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[376], tmp_assign_source_264);
    }
    {
        PyObject *tmp_assign_source_265;
        PyObject *tmp_import_name_from_252;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_252 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_252)) {
            tmp_assign_source_265 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_252,
                (PyObject *)moduledict_numpy,
                mod_consts[377],
                const_int_0
            );
        } else {
            tmp_assign_source_265 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_252, mod_consts[377]);
        }

        if (tmp_assign_source_265 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[377], tmp_assign_source_265);
    }
    {
        PyObject *tmp_assign_source_266;
        PyObject *tmp_import_name_from_253;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_253 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_253)) {
            tmp_assign_source_266 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_253,
                (PyObject *)moduledict_numpy,
                mod_consts[378],
                const_int_0
            );
        } else {
            tmp_assign_source_266 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_253, mod_consts[378]);
        }

        if (tmp_assign_source_266 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[378], tmp_assign_source_266);
    }
    {
        PyObject *tmp_assign_source_267;
        PyObject *tmp_import_name_from_254;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_254 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_254)) {
            tmp_assign_source_267 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_254,
                (PyObject *)moduledict_numpy,
                mod_consts[379],
                const_int_0
            );
        } else {
            tmp_assign_source_267 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_254, mod_consts[379]);
        }

        if (tmp_assign_source_267 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[379], tmp_assign_source_267);
    }
    {
        PyObject *tmp_assign_source_268;
        PyObject *tmp_import_name_from_255;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_255 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_255)) {
            tmp_assign_source_268 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_255,
                (PyObject *)moduledict_numpy,
                mod_consts[380],
                const_int_0
            );
        } else {
            tmp_assign_source_268 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_255, mod_consts[380]);
        }

        if (tmp_assign_source_268 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[380], tmp_assign_source_268);
    }
    {
        PyObject *tmp_assign_source_269;
        PyObject *tmp_import_name_from_256;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_256 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_256)) {
            tmp_assign_source_269 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_256,
                (PyObject *)moduledict_numpy,
                mod_consts[381],
                const_int_0
            );
        } else {
            tmp_assign_source_269 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_256, mod_consts[381]);
        }

        if (tmp_assign_source_269 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[381], tmp_assign_source_269);
    }
    {
        PyObject *tmp_assign_source_270;
        PyObject *tmp_import_name_from_257;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_257 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_257)) {
            tmp_assign_source_270 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_257,
                (PyObject *)moduledict_numpy,
                mod_consts[382],
                const_int_0
            );
        } else {
            tmp_assign_source_270 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_257, mod_consts[382]);
        }

        if (tmp_assign_source_270 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[382], tmp_assign_source_270);
    }
    {
        PyObject *tmp_assign_source_271;
        PyObject *tmp_import_name_from_258;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_258 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_258)) {
            tmp_assign_source_271 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_258,
                (PyObject *)moduledict_numpy,
                mod_consts[383],
                const_int_0
            );
        } else {
            tmp_assign_source_271 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_258, mod_consts[383]);
        }

        if (tmp_assign_source_271 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[383], tmp_assign_source_271);
    }
    {
        PyObject *tmp_assign_source_272;
        PyObject *tmp_import_name_from_259;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_259 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_259)) {
            tmp_assign_source_272 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_259,
                (PyObject *)moduledict_numpy,
                mod_consts[384],
                const_int_0
            );
        } else {
            tmp_assign_source_272 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_259, mod_consts[384]);
        }

        if (tmp_assign_source_272 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[384], tmp_assign_source_272);
    }
    {
        PyObject *tmp_assign_source_273;
        PyObject *tmp_import_name_from_260;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_260 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_260)) {
            tmp_assign_source_273 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_260,
                (PyObject *)moduledict_numpy,
                mod_consts[385],
                const_int_0
            );
        } else {
            tmp_assign_source_273 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_260, mod_consts[385]);
        }

        if (tmp_assign_source_273 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[385], tmp_assign_source_273);
    }
    {
        PyObject *tmp_assign_source_274;
        PyObject *tmp_import_name_from_261;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_261 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_261)) {
            tmp_assign_source_274 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_261,
                (PyObject *)moduledict_numpy,
                mod_consts[386],
                const_int_0
            );
        } else {
            tmp_assign_source_274 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_261, mod_consts[386]);
        }

        if (tmp_assign_source_274 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[386], tmp_assign_source_274);
    }
    {
        PyObject *tmp_assign_source_275;
        PyObject *tmp_import_name_from_262;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_262 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_262)) {
            tmp_assign_source_275 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_262,
                (PyObject *)moduledict_numpy,
                mod_consts[387],
                const_int_0
            );
        } else {
            tmp_assign_source_275 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_262, mod_consts[387]);
        }

        if (tmp_assign_source_275 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[387], tmp_assign_source_275);
    }
    {
        PyObject *tmp_assign_source_276;
        PyObject *tmp_import_name_from_263;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_263 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_263)) {
            tmp_assign_source_276 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_263,
                (PyObject *)moduledict_numpy,
                mod_consts[388],
                const_int_0
            );
        } else {
            tmp_assign_source_276 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_263, mod_consts[388]);
        }

        if (tmp_assign_source_276 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[388], tmp_assign_source_276);
    }
    {
        PyObject *tmp_assign_source_277;
        PyObject *tmp_import_name_from_264;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_264 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_264)) {
            tmp_assign_source_277 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_264,
                (PyObject *)moduledict_numpy,
                mod_consts[389],
                const_int_0
            );
        } else {
            tmp_assign_source_277 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_264, mod_consts[389]);
        }

        if (tmp_assign_source_277 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[389], tmp_assign_source_277);
    }
    {
        PyObject *tmp_assign_source_278;
        PyObject *tmp_import_name_from_265;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_265 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_265)) {
            tmp_assign_source_278 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_265,
                (PyObject *)moduledict_numpy,
                mod_consts[390],
                const_int_0
            );
        } else {
            tmp_assign_source_278 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_265, mod_consts[390]);
        }

        if (tmp_assign_source_278 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[390], tmp_assign_source_278);
    }
    {
        PyObject *tmp_assign_source_279;
        PyObject *tmp_import_name_from_266;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_266 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_266)) {
            tmp_assign_source_279 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_266,
                (PyObject *)moduledict_numpy,
                mod_consts[391],
                const_int_0
            );
        } else {
            tmp_assign_source_279 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_266, mod_consts[391]);
        }

        if (tmp_assign_source_279 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[391], tmp_assign_source_279);
    }
    {
        PyObject *tmp_assign_source_280;
        PyObject *tmp_import_name_from_267;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_267 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_267)) {
            tmp_assign_source_280 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_267,
                (PyObject *)moduledict_numpy,
                mod_consts[392],
                const_int_0
            );
        } else {
            tmp_assign_source_280 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_267, mod_consts[392]);
        }

        if (tmp_assign_source_280 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[392], tmp_assign_source_280);
    }
    {
        PyObject *tmp_assign_source_281;
        PyObject *tmp_import_name_from_268;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_268 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_268)) {
            tmp_assign_source_281 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_268,
                (PyObject *)moduledict_numpy,
                mod_consts[393],
                const_int_0
            );
        } else {
            tmp_assign_source_281 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_268, mod_consts[393]);
        }

        if (tmp_assign_source_281 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[393], tmp_assign_source_281);
    }
    {
        PyObject *tmp_assign_source_282;
        PyObject *tmp_import_name_from_269;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_269 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_269)) {
            tmp_assign_source_282 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_269,
                (PyObject *)moduledict_numpy,
                mod_consts[394],
                const_int_0
            );
        } else {
            tmp_assign_source_282 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_269, mod_consts[394]);
        }

        if (tmp_assign_source_282 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[394], tmp_assign_source_282);
    }
    {
        PyObject *tmp_assign_source_283;
        PyObject *tmp_import_name_from_270;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_270 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_270)) {
            tmp_assign_source_283 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_270,
                (PyObject *)moduledict_numpy,
                mod_consts[395],
                const_int_0
            );
        } else {
            tmp_assign_source_283 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_270, mod_consts[395]);
        }

        if (tmp_assign_source_283 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[395], tmp_assign_source_283);
    }
    {
        PyObject *tmp_assign_source_284;
        PyObject *tmp_import_name_from_271;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_271 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_271)) {
            tmp_assign_source_284 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_271,
                (PyObject *)moduledict_numpy,
                mod_consts[396],
                const_int_0
            );
        } else {
            tmp_assign_source_284 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_271, mod_consts[396]);
        }

        if (tmp_assign_source_284 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[396], tmp_assign_source_284);
    }
    {
        PyObject *tmp_assign_source_285;
        PyObject *tmp_import_name_from_272;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_272 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_272)) {
            tmp_assign_source_285 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_272,
                (PyObject *)moduledict_numpy,
                mod_consts[397],
                const_int_0
            );
        } else {
            tmp_assign_source_285 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_272, mod_consts[397]);
        }

        if (tmp_assign_source_285 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[397], tmp_assign_source_285);
    }
    {
        PyObject *tmp_assign_source_286;
        PyObject *tmp_import_name_from_273;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_273 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_273)) {
            tmp_assign_source_286 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_273,
                (PyObject *)moduledict_numpy,
                mod_consts[398],
                const_int_0
            );
        } else {
            tmp_assign_source_286 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_273, mod_consts[398]);
        }

        if (tmp_assign_source_286 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[398], tmp_assign_source_286);
    }
    {
        PyObject *tmp_assign_source_287;
        PyObject *tmp_import_name_from_274;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_274 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_274)) {
            tmp_assign_source_287 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_274,
                (PyObject *)moduledict_numpy,
                mod_consts[399],
                const_int_0
            );
        } else {
            tmp_assign_source_287 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_274, mod_consts[399]);
        }

        if (tmp_assign_source_287 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[399], tmp_assign_source_287);
    }
    {
        PyObject *tmp_assign_source_288;
        PyObject *tmp_import_name_from_275;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_275 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_275)) {
            tmp_assign_source_288 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_275,
                (PyObject *)moduledict_numpy,
                mod_consts[400],
                const_int_0
            );
        } else {
            tmp_assign_source_288 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_275, mod_consts[400]);
        }

        if (tmp_assign_source_288 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[400], tmp_assign_source_288);
    }
    {
        PyObject *tmp_assign_source_289;
        PyObject *tmp_import_name_from_276;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_276 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_276)) {
            tmp_assign_source_289 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_276,
                (PyObject *)moduledict_numpy,
                mod_consts[401],
                const_int_0
            );
        } else {
            tmp_assign_source_289 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_276, mod_consts[401]);
        }

        if (tmp_assign_source_289 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[401], tmp_assign_source_289);
    }
    {
        PyObject *tmp_assign_source_290;
        PyObject *tmp_import_name_from_277;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_277 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_277)) {
            tmp_assign_source_290 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_277,
                (PyObject *)moduledict_numpy,
                mod_consts[402],
                const_int_0
            );
        } else {
            tmp_assign_source_290 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_277, mod_consts[402]);
        }

        if (tmp_assign_source_290 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[402], tmp_assign_source_290);
    }
    {
        PyObject *tmp_assign_source_291;
        PyObject *tmp_import_name_from_278;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_278 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_278)) {
            tmp_assign_source_291 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_278,
                (PyObject *)moduledict_numpy,
                mod_consts[403],
                const_int_0
            );
        } else {
            tmp_assign_source_291 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_278, mod_consts[403]);
        }

        if (tmp_assign_source_291 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[403], tmp_assign_source_291);
    }
    {
        PyObject *tmp_assign_source_292;
        PyObject *tmp_import_name_from_279;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_279 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_279)) {
            tmp_assign_source_292 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_279,
                (PyObject *)moduledict_numpy,
                mod_consts[404],
                const_int_0
            );
        } else {
            tmp_assign_source_292 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_279, mod_consts[404]);
        }

        if (tmp_assign_source_292 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[404], tmp_assign_source_292);
    }
    {
        PyObject *tmp_assign_source_293;
        PyObject *tmp_import_name_from_280;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_280 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_280)) {
            tmp_assign_source_293 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_280,
                (PyObject *)moduledict_numpy,
                mod_consts[405],
                const_int_0
            );
        } else {
            tmp_assign_source_293 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_280, mod_consts[405]);
        }

        if (tmp_assign_source_293 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[405], tmp_assign_source_293);
    }
    {
        PyObject *tmp_assign_source_294;
        PyObject *tmp_import_name_from_281;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_281 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_281)) {
            tmp_assign_source_294 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_281,
                (PyObject *)moduledict_numpy,
                mod_consts[406],
                const_int_0
            );
        } else {
            tmp_assign_source_294 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_281, mod_consts[406]);
        }

        if (tmp_assign_source_294 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[406], tmp_assign_source_294);
    }
    {
        PyObject *tmp_assign_source_295;
        PyObject *tmp_import_name_from_282;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_282 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_282)) {
            tmp_assign_source_295 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_282,
                (PyObject *)moduledict_numpy,
                mod_consts[407],
                const_int_0
            );
        } else {
            tmp_assign_source_295 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_282, mod_consts[407]);
        }

        if (tmp_assign_source_295 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[407], tmp_assign_source_295);
    }
    {
        PyObject *tmp_assign_source_296;
        PyObject *tmp_import_name_from_283;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_283 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_283)) {
            tmp_assign_source_296 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_283,
                (PyObject *)moduledict_numpy,
                mod_consts[408],
                const_int_0
            );
        } else {
            tmp_assign_source_296 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_283, mod_consts[408]);
        }

        if (tmp_assign_source_296 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[408], tmp_assign_source_296);
    }
    {
        PyObject *tmp_assign_source_297;
        PyObject *tmp_import_name_from_284;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_284 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_284)) {
            tmp_assign_source_297 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_284,
                (PyObject *)moduledict_numpy,
                mod_consts[409],
                const_int_0
            );
        } else {
            tmp_assign_source_297 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_284, mod_consts[409]);
        }

        if (tmp_assign_source_297 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[409], tmp_assign_source_297);
    }
    {
        PyObject *tmp_assign_source_298;
        PyObject *tmp_import_name_from_285;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_285 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_285)) {
            tmp_assign_source_298 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_285,
                (PyObject *)moduledict_numpy,
                mod_consts[410],
                const_int_0
            );
        } else {
            tmp_assign_source_298 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_285, mod_consts[410]);
        }

        if (tmp_assign_source_298 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[410], tmp_assign_source_298);
    }
    {
        PyObject *tmp_assign_source_299;
        PyObject *tmp_import_name_from_286;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_286 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_286)) {
            tmp_assign_source_299 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_286,
                (PyObject *)moduledict_numpy,
                mod_consts[411],
                const_int_0
            );
        } else {
            tmp_assign_source_299 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_286, mod_consts[411]);
        }

        if (tmp_assign_source_299 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[411], tmp_assign_source_299);
    }
    {
        PyObject *tmp_assign_source_300;
        PyObject *tmp_import_name_from_287;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_287 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_287)) {
            tmp_assign_source_300 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_287,
                (PyObject *)moduledict_numpy,
                mod_consts[412],
                const_int_0
            );
        } else {
            tmp_assign_source_300 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_287, mod_consts[412]);
        }

        if (tmp_assign_source_300 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[412], tmp_assign_source_300);
    }
    {
        PyObject *tmp_assign_source_301;
        PyObject *tmp_import_name_from_288;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_288 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_288)) {
            tmp_assign_source_301 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_288,
                (PyObject *)moduledict_numpy,
                mod_consts[413],
                const_int_0
            );
        } else {
            tmp_assign_source_301 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_288, mod_consts[413]);
        }

        if (tmp_assign_source_301 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[413], tmp_assign_source_301);
    }
    {
        PyObject *tmp_assign_source_302;
        PyObject *tmp_import_name_from_289;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_289 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_289)) {
            tmp_assign_source_302 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_289,
                (PyObject *)moduledict_numpy,
                mod_consts[414],
                const_int_0
            );
        } else {
            tmp_assign_source_302 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_289, mod_consts[414]);
        }

        if (tmp_assign_source_302 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[414], tmp_assign_source_302);
    }
    {
        PyObject *tmp_assign_source_303;
        PyObject *tmp_import_name_from_290;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_290 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_290)) {
            tmp_assign_source_303 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_290,
                (PyObject *)moduledict_numpy,
                mod_consts[415],
                const_int_0
            );
        } else {
            tmp_assign_source_303 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_290, mod_consts[415]);
        }

        if (tmp_assign_source_303 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[415], tmp_assign_source_303);
    }
    {
        PyObject *tmp_assign_source_304;
        PyObject *tmp_import_name_from_291;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_291 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_291)) {
            tmp_assign_source_304 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_291,
                (PyObject *)moduledict_numpy,
                mod_consts[416],
                const_int_0
            );
        } else {
            tmp_assign_source_304 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_291, mod_consts[416]);
        }

        if (tmp_assign_source_304 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[416], tmp_assign_source_304);
    }
    {
        PyObject *tmp_assign_source_305;
        PyObject *tmp_import_name_from_292;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_292 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_292)) {
            tmp_assign_source_305 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_292,
                (PyObject *)moduledict_numpy,
                mod_consts[417],
                const_int_0
            );
        } else {
            tmp_assign_source_305 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_292, mod_consts[417]);
        }

        if (tmp_assign_source_305 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[417], tmp_assign_source_305);
    }
    {
        PyObject *tmp_assign_source_306;
        PyObject *tmp_import_name_from_293;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_293 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_293)) {
            tmp_assign_source_306 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_293,
                (PyObject *)moduledict_numpy,
                mod_consts[418],
                const_int_0
            );
        } else {
            tmp_assign_source_306 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_293, mod_consts[418]);
        }

        if (tmp_assign_source_306 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[418], tmp_assign_source_306);
    }
    {
        PyObject *tmp_assign_source_307;
        PyObject *tmp_import_name_from_294;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_294 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_294)) {
            tmp_assign_source_307 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_294,
                (PyObject *)moduledict_numpy,
                mod_consts[419],
                const_int_0
            );
        } else {
            tmp_assign_source_307 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_294, mod_consts[419]);
        }

        if (tmp_assign_source_307 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[419], tmp_assign_source_307);
    }
    {
        PyObject *tmp_assign_source_308;
        PyObject *tmp_import_name_from_295;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_295 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_295)) {
            tmp_assign_source_308 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_295,
                (PyObject *)moduledict_numpy,
                mod_consts[420],
                const_int_0
            );
        } else {
            tmp_assign_source_308 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_295, mod_consts[420]);
        }

        if (tmp_assign_source_308 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[420], tmp_assign_source_308);
    }
    {
        PyObject *tmp_assign_source_309;
        PyObject *tmp_import_name_from_296;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_296 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_296)) {
            tmp_assign_source_309 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_296,
                (PyObject *)moduledict_numpy,
                mod_consts[421],
                const_int_0
            );
        } else {
            tmp_assign_source_309 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_296, mod_consts[421]);
        }

        if (tmp_assign_source_309 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[421], tmp_assign_source_309);
    }
    {
        PyObject *tmp_assign_source_310;
        PyObject *tmp_import_name_from_297;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_297 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_297)) {
            tmp_assign_source_310 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_297,
                (PyObject *)moduledict_numpy,
                mod_consts[422],
                const_int_0
            );
        } else {
            tmp_assign_source_310 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_297, mod_consts[422]);
        }

        if (tmp_assign_source_310 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[422], tmp_assign_source_310);
    }
    {
        PyObject *tmp_assign_source_311;
        PyObject *tmp_import_name_from_298;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_298 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_298)) {
            tmp_assign_source_311 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_298,
                (PyObject *)moduledict_numpy,
                mod_consts[423],
                const_int_0
            );
        } else {
            tmp_assign_source_311 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_298, mod_consts[423]);
        }

        if (tmp_assign_source_311 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[423], tmp_assign_source_311);
    }
    {
        PyObject *tmp_assign_source_312;
        PyObject *tmp_import_name_from_299;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_299 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_299)) {
            tmp_assign_source_312 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_299,
                (PyObject *)moduledict_numpy,
                mod_consts[424],
                const_int_0
            );
        } else {
            tmp_assign_source_312 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_299, mod_consts[424]);
        }

        if (tmp_assign_source_312 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[424], tmp_assign_source_312);
    }
    {
        PyObject *tmp_assign_source_313;
        PyObject *tmp_import_name_from_300;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_300 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_300)) {
            tmp_assign_source_313 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_300,
                (PyObject *)moduledict_numpy,
                mod_consts[425],
                const_int_0
            );
        } else {
            tmp_assign_source_313 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_300, mod_consts[425]);
        }

        if (tmp_assign_source_313 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[425], tmp_assign_source_313);
    }
    {
        PyObject *tmp_assign_source_314;
        PyObject *tmp_import_name_from_301;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_301 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_301)) {
            tmp_assign_source_314 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_301,
                (PyObject *)moduledict_numpy,
                mod_consts[426],
                const_int_0
            );
        } else {
            tmp_assign_source_314 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_301, mod_consts[426]);
        }

        if (tmp_assign_source_314 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[426], tmp_assign_source_314);
    }
    {
        PyObject *tmp_assign_source_315;
        PyObject *tmp_import_name_from_302;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_302 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_302)) {
            tmp_assign_source_315 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_302,
                (PyObject *)moduledict_numpy,
                mod_consts[427],
                const_int_0
            );
        } else {
            tmp_assign_source_315 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_302, mod_consts[427]);
        }

        if (tmp_assign_source_315 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[427], tmp_assign_source_315);
    }
    {
        PyObject *tmp_assign_source_316;
        PyObject *tmp_import_name_from_303;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_303 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_303)) {
            tmp_assign_source_316 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_303,
                (PyObject *)moduledict_numpy,
                mod_consts[428],
                const_int_0
            );
        } else {
            tmp_assign_source_316 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_303, mod_consts[428]);
        }

        if (tmp_assign_source_316 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[428], tmp_assign_source_316);
    }
    {
        PyObject *tmp_assign_source_317;
        PyObject *tmp_import_name_from_304;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_304 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_304)) {
            tmp_assign_source_317 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_304,
                (PyObject *)moduledict_numpy,
                mod_consts[429],
                const_int_0
            );
        } else {
            tmp_assign_source_317 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_304, mod_consts[429]);
        }

        if (tmp_assign_source_317 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[429], tmp_assign_source_317);
    }
    {
        PyObject *tmp_assign_source_318;
        PyObject *tmp_import_name_from_305;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_305 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_305)) {
            tmp_assign_source_318 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_305,
                (PyObject *)moduledict_numpy,
                mod_consts[430],
                const_int_0
            );
        } else {
            tmp_assign_source_318 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_305, mod_consts[430]);
        }

        if (tmp_assign_source_318 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[430], tmp_assign_source_318);
    }
    {
        PyObject *tmp_assign_source_319;
        PyObject *tmp_import_name_from_306;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_306 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_306)) {
            tmp_assign_source_319 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_306,
                (PyObject *)moduledict_numpy,
                mod_consts[431],
                const_int_0
            );
        } else {
            tmp_assign_source_319 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_306, mod_consts[431]);
        }

        if (tmp_assign_source_319 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[431], tmp_assign_source_319);
    }
    {
        PyObject *tmp_assign_source_320;
        PyObject *tmp_import_name_from_307;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_307 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_307)) {
            tmp_assign_source_320 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_307,
                (PyObject *)moduledict_numpy,
                mod_consts[432],
                const_int_0
            );
        } else {
            tmp_assign_source_320 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_307, mod_consts[432]);
        }

        if (tmp_assign_source_320 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[432], tmp_assign_source_320);
    }
    {
        PyObject *tmp_assign_source_321;
        PyObject *tmp_import_name_from_308;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_308 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_308)) {
            tmp_assign_source_321 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_308,
                (PyObject *)moduledict_numpy,
                mod_consts[433],
                const_int_0
            );
        } else {
            tmp_assign_source_321 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_308, mod_consts[433]);
        }

        if (tmp_assign_source_321 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[433], tmp_assign_source_321);
    }
    {
        PyObject *tmp_assign_source_322;
        PyObject *tmp_import_name_from_309;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_309 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_309)) {
            tmp_assign_source_322 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_309,
                (PyObject *)moduledict_numpy,
                mod_consts[434],
                const_int_0
            );
        } else {
            tmp_assign_source_322 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_309, mod_consts[434]);
        }

        if (tmp_assign_source_322 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[434], tmp_assign_source_322);
    }
    {
        PyObject *tmp_assign_source_323;
        PyObject *tmp_import_name_from_310;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_310 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_310)) {
            tmp_assign_source_323 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_310,
                (PyObject *)moduledict_numpy,
                mod_consts[435],
                const_int_0
            );
        } else {
            tmp_assign_source_323 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_310, mod_consts[435]);
        }

        if (tmp_assign_source_323 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[435], tmp_assign_source_323);
    }
    {
        PyObject *tmp_assign_source_324;
        PyObject *tmp_import_name_from_311;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_311 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_311)) {
            tmp_assign_source_324 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_311,
                (PyObject *)moduledict_numpy,
                mod_consts[436],
                const_int_0
            );
        } else {
            tmp_assign_source_324 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_311, mod_consts[436]);
        }

        if (tmp_assign_source_324 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[436], tmp_assign_source_324);
    }
    {
        PyObject *tmp_assign_source_325;
        PyObject *tmp_import_name_from_312;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_312 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_312)) {
            tmp_assign_source_325 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_312,
                (PyObject *)moduledict_numpy,
                mod_consts[437],
                const_int_0
            );
        } else {
            tmp_assign_source_325 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_312, mod_consts[437]);
        }

        if (tmp_assign_source_325 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[437], tmp_assign_source_325);
    }
    {
        PyObject *tmp_assign_source_326;
        PyObject *tmp_import_name_from_313;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_313 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_313)) {
            tmp_assign_source_326 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_313,
                (PyObject *)moduledict_numpy,
                mod_consts[438],
                const_int_0
            );
        } else {
            tmp_assign_source_326 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_313, mod_consts[438]);
        }

        if (tmp_assign_source_326 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[438], tmp_assign_source_326);
    }
    {
        PyObject *tmp_assign_source_327;
        PyObject *tmp_import_name_from_314;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_314 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_314)) {
            tmp_assign_source_327 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_314,
                (PyObject *)moduledict_numpy,
                mod_consts[439],
                const_int_0
            );
        } else {
            tmp_assign_source_327 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_314, mod_consts[439]);
        }

        if (tmp_assign_source_327 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[439], tmp_assign_source_327);
    }
    {
        PyObject *tmp_assign_source_328;
        PyObject *tmp_import_name_from_315;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_315 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_315)) {
            tmp_assign_source_328 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_315,
                (PyObject *)moduledict_numpy,
                mod_consts[440],
                const_int_0
            );
        } else {
            tmp_assign_source_328 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_315, mod_consts[440]);
        }

        if (tmp_assign_source_328 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[440], tmp_assign_source_328);
    }
    {
        PyObject *tmp_assign_source_329;
        PyObject *tmp_import_name_from_316;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_316 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_316)) {
            tmp_assign_source_329 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_316,
                (PyObject *)moduledict_numpy,
                mod_consts[441],
                const_int_0
            );
        } else {
            tmp_assign_source_329 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_316, mod_consts[441]);
        }

        if (tmp_assign_source_329 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[441], tmp_assign_source_329);
    }
    {
        PyObject *tmp_assign_source_330;
        PyObject *tmp_import_name_from_317;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_317 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_317)) {
            tmp_assign_source_330 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_317,
                (PyObject *)moduledict_numpy,
                mod_consts[442],
                const_int_0
            );
        } else {
            tmp_assign_source_330 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_317, mod_consts[442]);
        }

        if (tmp_assign_source_330 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[442], tmp_assign_source_330);
    }
    {
        PyObject *tmp_assign_source_331;
        PyObject *tmp_import_name_from_318;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_318 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_318)) {
            tmp_assign_source_331 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_318,
                (PyObject *)moduledict_numpy,
                mod_consts[443],
                const_int_0
            );
        } else {
            tmp_assign_source_331 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_318, mod_consts[443]);
        }

        if (tmp_assign_source_331 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[443], tmp_assign_source_331);
    }
    {
        PyObject *tmp_assign_source_332;
        PyObject *tmp_import_name_from_319;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_319 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_319)) {
            tmp_assign_source_332 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_319,
                (PyObject *)moduledict_numpy,
                mod_consts[444],
                const_int_0
            );
        } else {
            tmp_assign_source_332 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_319, mod_consts[444]);
        }

        if (tmp_assign_source_332 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[444], tmp_assign_source_332);
    }
    {
        PyObject *tmp_assign_source_333;
        PyObject *tmp_import_name_from_320;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_320 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_320)) {
            tmp_assign_source_333 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_320,
                (PyObject *)moduledict_numpy,
                mod_consts[445],
                const_int_0
            );
        } else {
            tmp_assign_source_333 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_320, mod_consts[445]);
        }

        if (tmp_assign_source_333 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[445], tmp_assign_source_333);
    }
    {
        PyObject *tmp_assign_source_334;
        PyObject *tmp_import_name_from_321;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_321 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_321)) {
            tmp_assign_source_334 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_321,
                (PyObject *)moduledict_numpy,
                mod_consts[446],
                const_int_0
            );
        } else {
            tmp_assign_source_334 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_321, mod_consts[446]);
        }

        if (tmp_assign_source_334 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[446], tmp_assign_source_334);
    }
    {
        PyObject *tmp_assign_source_335;
        PyObject *tmp_import_name_from_322;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_322 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_322)) {
            tmp_assign_source_335 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_322,
                (PyObject *)moduledict_numpy,
                mod_consts[447],
                const_int_0
            );
        } else {
            tmp_assign_source_335 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_322, mod_consts[447]);
        }

        if (tmp_assign_source_335 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[447], tmp_assign_source_335);
    }
    {
        PyObject *tmp_assign_source_336;
        PyObject *tmp_import_name_from_323;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_323 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_323)) {
            tmp_assign_source_336 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_323,
                (PyObject *)moduledict_numpy,
                mod_consts[448],
                const_int_0
            );
        } else {
            tmp_assign_source_336 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_323, mod_consts[448]);
        }

        if (tmp_assign_source_336 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[448], tmp_assign_source_336);
    }
    {
        PyObject *tmp_assign_source_337;
        PyObject *tmp_import_name_from_324;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_324 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_324)) {
            tmp_assign_source_337 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_324,
                (PyObject *)moduledict_numpy,
                mod_consts[449],
                const_int_0
            );
        } else {
            tmp_assign_source_337 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_324, mod_consts[449]);
        }

        if (tmp_assign_source_337 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[449], tmp_assign_source_337);
    }
    {
        PyObject *tmp_assign_source_338;
        PyObject *tmp_import_name_from_325;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_325 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_325)) {
            tmp_assign_source_338 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_325,
                (PyObject *)moduledict_numpy,
                mod_consts[450],
                const_int_0
            );
        } else {
            tmp_assign_source_338 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_325, mod_consts[450]);
        }

        if (tmp_assign_source_338 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[450], tmp_assign_source_338);
    }
    {
        PyObject *tmp_assign_source_339;
        PyObject *tmp_import_name_from_326;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_326 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_326)) {
            tmp_assign_source_339 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_326,
                (PyObject *)moduledict_numpy,
                mod_consts[451],
                const_int_0
            );
        } else {
            tmp_assign_source_339 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_326, mod_consts[451]);
        }

        if (tmp_assign_source_339 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[451], tmp_assign_source_339);
    }
    {
        PyObject *tmp_assign_source_340;
        PyObject *tmp_import_name_from_327;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_327 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_327)) {
            tmp_assign_source_340 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_327,
                (PyObject *)moduledict_numpy,
                mod_consts[452],
                const_int_0
            );
        } else {
            tmp_assign_source_340 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_327, mod_consts[452]);
        }

        if (tmp_assign_source_340 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[452], tmp_assign_source_340);
    }
    {
        PyObject *tmp_assign_source_341;
        PyObject *tmp_import_name_from_328;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_328 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_328)) {
            tmp_assign_source_341 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_328,
                (PyObject *)moduledict_numpy,
                mod_consts[453],
                const_int_0
            );
        } else {
            tmp_assign_source_341 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_328, mod_consts[453]);
        }

        if (tmp_assign_source_341 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[453], tmp_assign_source_341);
    }
    {
        PyObject *tmp_assign_source_342;
        PyObject *tmp_import_name_from_329;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_329 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_329)) {
            tmp_assign_source_342 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_329,
                (PyObject *)moduledict_numpy,
                mod_consts[454],
                const_int_0
            );
        } else {
            tmp_assign_source_342 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_329, mod_consts[454]);
        }

        if (tmp_assign_source_342 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[454], tmp_assign_source_342);
    }
    {
        PyObject *tmp_assign_source_343;
        PyObject *tmp_import_name_from_330;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_330 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_330)) {
            tmp_assign_source_343 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_330,
                (PyObject *)moduledict_numpy,
                mod_consts[455],
                const_int_0
            );
        } else {
            tmp_assign_source_343 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_330, mod_consts[455]);
        }

        if (tmp_assign_source_343 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[455], tmp_assign_source_343);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_lineno_7 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_7 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_344;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = mod_consts[456];
        tmp_assign_source_344 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        assert(!(tmp_assign_source_344 == NULL));
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_344;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_345;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_345 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
        if (tmp_assign_source_345 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

                exception_lineno = 187;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_345;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_346;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_346 = tmp_for_loop_1__iter_value;
        UPDATE_STRING_DICT0(moduledict_numpy, (Nuitka_StringObject *)mod_consts[457], tmp_assign_source_346);
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_name_value_10;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_expression_value_4 = module_var_accessor_numpy_$$__core(tstate);
        if (unlikely(tmp_expression_value_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[139]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 189;

            goto try_except_handler_9;
        }
        tmp_name_value_10 = module_var_accessor_numpy_$$_ta(tstate);
        assert(!(tmp_name_value_10 == NULL));
        tmp_ass_subvalue_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_4, tmp_name_value_10, NULL);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 189;

            goto try_except_handler_9;
        }
        tmp_ass_subscribed_1 = (PyObject *)moduledict_numpy;
        tmp_ass_subscript_1 = module_var_accessor_numpy_$$_ta(tstate);
        assert(!(tmp_ass_subscript_1 == NULL));
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 189;

            goto try_except_handler_9;
        }
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_lineno_8 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_8 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 3.
    exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy, exception_keeper_lineno_8);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
        } else if (exception_keeper_lineno_8 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy, exception_keeper_lineno_8);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_8);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_3 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 188;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy->m_frame)) {
            frame_frame_numpy->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_10;
    branch_no_4:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_lineno_9 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_9 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

    // Re-raise.
    exception_state = exception_keeper_name_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_8;
    // End of try:
    try_end_7:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

    goto try_end_6;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_6:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 187;

        goto try_except_handler_8;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_lineno_10 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_10 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy, mod_consts[457]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[457]);

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_assign_source_347;
        PyObject *tmp_import_name_from_331;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_11 = mod_consts[47];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[458];
        tmp_level_value_10 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 194;
        tmp_import_name_from_331 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_331 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_331)) {
            tmp_assign_source_347 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_331,
                (PyObject *)moduledict_numpy,
                mod_consts[459],
                const_int_0
            );
        } else {
            tmp_assign_source_347 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_331, mod_consts[459]);
        }

        Py_DECREF(tmp_import_name_from_331);
        if (tmp_assign_source_347 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[459], tmp_assign_source_347);
    }
    {
        PyObject *tmp_assign_source_348;
        PyObject *tmp_import_name_from_332;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_12 = mod_consts[459];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[460];
        tmp_level_value_11 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 195;
        tmp_import_name_from_332 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_332 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_332)) {
            tmp_assign_source_348 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_332,
                (PyObject *)moduledict_numpy,
                mod_consts[461],
                const_int_0
            );
        } else {
            tmp_assign_source_348 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_332, mod_consts[461]);
        }

        Py_DECREF(tmp_import_name_from_332);
        if (tmp_assign_source_348 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[462], tmp_assign_source_348);
    }
    {
        PyObject *tmp_assign_source_349;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_13 = mod_consts[463];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[464];
        tmp_level_value_12 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 196;
        tmp_assign_source_349 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_assign_source_349 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_349;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_350;
        PyObject *tmp_import_name_from_333;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_333 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_333)) {
            tmp_assign_source_350 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_333,
                (PyObject *)moduledict_numpy,
                mod_consts[465],
                const_int_0
            );
        } else {
            tmp_assign_source_350 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_333, mod_consts[465]);
        }

        if (tmp_assign_source_350 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 196;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[465], tmp_assign_source_350);
    }
    {
        PyObject *tmp_assign_source_351;
        PyObject *tmp_import_name_from_334;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_334 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_334)) {
            tmp_assign_source_351 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_334,
                (PyObject *)moduledict_numpy,
                mod_consts[466],
                const_int_0
            );
        } else {
            tmp_assign_source_351 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_334, mod_consts[466]);
        }

        if (tmp_assign_source_351 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 196;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[466], tmp_assign_source_351);
    }
    {
        PyObject *tmp_assign_source_352;
        PyObject *tmp_import_name_from_335;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_335 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_335)) {
            tmp_assign_source_352 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_335,
                (PyObject *)moduledict_numpy,
                mod_consts[467],
                const_int_0
            );
        } else {
            tmp_assign_source_352 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_335, mod_consts[467]);
        }

        if (tmp_assign_source_352 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 196;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[467], tmp_assign_source_352);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_lineno_11 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_11 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_353;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_14 = mod_consts[468];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[469];
        tmp_level_value_13 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 199;
        tmp_assign_source_353 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_assign_source_353 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_353;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_354;
        PyObject *tmp_import_name_from_336;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_336 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_336)) {
            tmp_assign_source_354 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_336,
                (PyObject *)moduledict_numpy,
                mod_consts[470],
                const_int_0
            );
        } else {
            tmp_assign_source_354 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_336, mod_consts[470]);
        }

        if (tmp_assign_source_354 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 199;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[470], tmp_assign_source_354);
    }
    {
        PyObject *tmp_assign_source_355;
        PyObject *tmp_import_name_from_337;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_337 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_337)) {
            tmp_assign_source_355 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_337,
                (PyObject *)moduledict_numpy,
                mod_consts[471],
                const_int_0
            );
        } else {
            tmp_assign_source_355 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_337, mod_consts[471]);
        }

        if (tmp_assign_source_355 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 199;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[471], tmp_assign_source_355);
    }
    {
        PyObject *tmp_assign_source_356;
        PyObject *tmp_import_name_from_338;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_338 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_338)) {
            tmp_assign_source_356 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_338,
                (PyObject *)moduledict_numpy,
                mod_consts[472],
                const_int_0
            );
        } else {
            tmp_assign_source_356 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_338, mod_consts[472]);
        }

        if (tmp_assign_source_356 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 199;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[472], tmp_assign_source_356);
    }
    {
        PyObject *tmp_assign_source_357;
        PyObject *tmp_import_name_from_339;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_339 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_339)) {
            tmp_assign_source_357 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_339,
                (PyObject *)moduledict_numpy,
                mod_consts[473],
                const_int_0
            );
        } else {
            tmp_assign_source_357 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_339, mod_consts[473]);
        }

        if (tmp_assign_source_357 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 199;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[473], tmp_assign_source_357);
    }
    {
        PyObject *tmp_assign_source_358;
        PyObject *tmp_import_name_from_340;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_340 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_340)) {
            tmp_assign_source_358 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_340,
                (PyObject *)moduledict_numpy,
                mod_consts[474],
                const_int_0
            );
        } else {
            tmp_assign_source_358 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_340, mod_consts[474]);
        }

        if (tmp_assign_source_358 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 199;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[474], tmp_assign_source_358);
    }
    {
        PyObject *tmp_assign_source_359;
        PyObject *tmp_import_name_from_341;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_341 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_341)) {
            tmp_assign_source_359 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_341,
                (PyObject *)moduledict_numpy,
                mod_consts[475],
                const_int_0
            );
        } else {
            tmp_assign_source_359 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_341, mod_consts[475]);
        }

        if (tmp_assign_source_359 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 199;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[475], tmp_assign_source_359);
    }
    {
        PyObject *tmp_assign_source_360;
        PyObject *tmp_import_name_from_342;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_342 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_342)) {
            tmp_assign_source_360 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_342,
                (PyObject *)moduledict_numpy,
                mod_consts[476],
                const_int_0
            );
        } else {
            tmp_assign_source_360 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_342, mod_consts[476]);
        }

        if (tmp_assign_source_360 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 199;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[476], tmp_assign_source_360);
    }
    {
        PyObject *tmp_assign_source_361;
        PyObject *tmp_import_name_from_343;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_343 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_343)) {
            tmp_assign_source_361 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_343,
                (PyObject *)moduledict_numpy,
                mod_consts[477],
                const_int_0
            );
        } else {
            tmp_assign_source_361 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_343, mod_consts[477]);
        }

        if (tmp_assign_source_361 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 199;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[477], tmp_assign_source_361);
    }
    {
        PyObject *tmp_assign_source_362;
        PyObject *tmp_import_name_from_344;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_344 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_344)) {
            tmp_assign_source_362 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_344,
                (PyObject *)moduledict_numpy,
                mod_consts[478],
                const_int_0
            );
        } else {
            tmp_assign_source_362 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_344, mod_consts[478]);
        }

        if (tmp_assign_source_362 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 199;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[478], tmp_assign_source_362);
    }
    {
        PyObject *tmp_assign_source_363;
        PyObject *tmp_import_name_from_345;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_345 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_345)) {
            tmp_assign_source_363 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_345,
                (PyObject *)moduledict_numpy,
                mod_consts[479],
                const_int_0
            );
        } else {
            tmp_assign_source_363 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_345, mod_consts[479]);
        }

        if (tmp_assign_source_363 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 199;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[479], tmp_assign_source_363);
    }
    {
        PyObject *tmp_assign_source_364;
        PyObject *tmp_import_name_from_346;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_346 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_346)) {
            tmp_assign_source_364 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_346,
                (PyObject *)moduledict_numpy,
                mod_consts[480],
                const_int_0
            );
        } else {
            tmp_assign_source_364 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_346, mod_consts[480]);
        }

        if (tmp_assign_source_364 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 199;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[480], tmp_assign_source_364);
    }
    {
        PyObject *tmp_assign_source_365;
        PyObject *tmp_import_name_from_347;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_347 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_347)) {
            tmp_assign_source_365 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_347,
                (PyObject *)moduledict_numpy,
                mod_consts[481],
                const_int_0
            );
        } else {
            tmp_assign_source_365 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_347, mod_consts[481]);
        }

        if (tmp_assign_source_365 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 199;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[481], tmp_assign_source_365);
    }
    {
        PyObject *tmp_assign_source_366;
        PyObject *tmp_import_name_from_348;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_348 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_348)) {
            tmp_assign_source_366 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_348,
                (PyObject *)moduledict_numpy,
                mod_consts[482],
                const_int_0
            );
        } else {
            tmp_assign_source_366 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_348, mod_consts[482]);
        }

        if (tmp_assign_source_366 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 199;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[482], tmp_assign_source_366);
    }
    {
        PyObject *tmp_assign_source_367;
        PyObject *tmp_import_name_from_349;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_349 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_349)) {
            tmp_assign_source_367 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_349,
                (PyObject *)moduledict_numpy,
                mod_consts[483],
                const_int_0
            );
        } else {
            tmp_assign_source_367 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_349, mod_consts[483]);
        }

        if (tmp_assign_source_367 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 199;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[483], tmp_assign_source_367);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_lineno_12 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_12 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    {
        PyObject *tmp_assign_source_368;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_15 = mod_consts[484];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[485];
        tmp_level_value_14 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 204;
        tmp_assign_source_368 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_assign_source_368 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_368;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_369;
        PyObject *tmp_import_name_from_350;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_350 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_350)) {
            tmp_assign_source_369 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_350,
                (PyObject *)moduledict_numpy,
                mod_consts[486],
                const_int_0
            );
        } else {
            tmp_assign_source_369 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_350, mod_consts[486]);
        }

        if (tmp_assign_source_369 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[486], tmp_assign_source_369);
    }
    {
        PyObject *tmp_assign_source_370;
        PyObject *tmp_import_name_from_351;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_351 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_351)) {
            tmp_assign_source_370 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_351,
                (PyObject *)moduledict_numpy,
                mod_consts[487],
                const_int_0
            );
        } else {
            tmp_assign_source_370 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_351, mod_consts[487]);
        }

        if (tmp_assign_source_370 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[487], tmp_assign_source_370);
    }
    {
        PyObject *tmp_assign_source_371;
        PyObject *tmp_import_name_from_352;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_352 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_352)) {
            tmp_assign_source_371 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_352,
                (PyObject *)moduledict_numpy,
                mod_consts[488],
                const_int_0
            );
        } else {
            tmp_assign_source_371 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_352, mod_consts[488]);
        }

        if (tmp_assign_source_371 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[488], tmp_assign_source_371);
    }
    {
        PyObject *tmp_assign_source_372;
        PyObject *tmp_import_name_from_353;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_353 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_353)) {
            tmp_assign_source_372 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_353,
                (PyObject *)moduledict_numpy,
                mod_consts[489],
                const_int_0
            );
        } else {
            tmp_assign_source_372 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_353, mod_consts[489]);
        }

        if (tmp_assign_source_372 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[489], tmp_assign_source_372);
    }
    {
        PyObject *tmp_assign_source_373;
        PyObject *tmp_import_name_from_354;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_354 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_354)) {
            tmp_assign_source_373 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_354,
                (PyObject *)moduledict_numpy,
                mod_consts[490],
                const_int_0
            );
        } else {
            tmp_assign_source_373 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_354, mod_consts[490]);
        }

        if (tmp_assign_source_373 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[490], tmp_assign_source_373);
    }
    {
        PyObject *tmp_assign_source_374;
        PyObject *tmp_import_name_from_355;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_355 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_355)) {
            tmp_assign_source_374 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_355,
                (PyObject *)moduledict_numpy,
                mod_consts[491],
                const_int_0
            );
        } else {
            tmp_assign_source_374 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_355, mod_consts[491]);
        }

        if (tmp_assign_source_374 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[491], tmp_assign_source_374);
    }
    {
        PyObject *tmp_assign_source_375;
        PyObject *tmp_import_name_from_356;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_356 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_356)) {
            tmp_assign_source_375 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_356,
                (PyObject *)moduledict_numpy,
                mod_consts[492],
                const_int_0
            );
        } else {
            tmp_assign_source_375 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_356, mod_consts[492]);
        }

        if (tmp_assign_source_375 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[492], tmp_assign_source_375);
    }
    {
        PyObject *tmp_assign_source_376;
        PyObject *tmp_import_name_from_357;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_357 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_357)) {
            tmp_assign_source_376 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_357,
                (PyObject *)moduledict_numpy,
                mod_consts[493],
                const_int_0
            );
        } else {
            tmp_assign_source_376 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_357, mod_consts[493]);
        }

        if (tmp_assign_source_376 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[493], tmp_assign_source_376);
    }
    {
        PyObject *tmp_assign_source_377;
        PyObject *tmp_import_name_from_358;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_358 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_358)) {
            tmp_assign_source_377 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_358,
                (PyObject *)moduledict_numpy,
                mod_consts[494],
                const_int_0
            );
        } else {
            tmp_assign_source_377 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_358, mod_consts[494]);
        }

        if (tmp_assign_source_377 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[494], tmp_assign_source_377);
    }
    {
        PyObject *tmp_assign_source_378;
        PyObject *tmp_import_name_from_359;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_359 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_359)) {
            tmp_assign_source_378 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_359,
                (PyObject *)moduledict_numpy,
                mod_consts[495],
                const_int_0
            );
        } else {
            tmp_assign_source_378 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_359, mod_consts[495]);
        }

        if (tmp_assign_source_378 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[495], tmp_assign_source_378);
    }
    {
        PyObject *tmp_assign_source_379;
        PyObject *tmp_import_name_from_360;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_360 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_360)) {
            tmp_assign_source_379 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_360,
                (PyObject *)moduledict_numpy,
                mod_consts[496],
                const_int_0
            );
        } else {
            tmp_assign_source_379 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_360, mod_consts[496]);
        }

        if (tmp_assign_source_379 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[496], tmp_assign_source_379);
    }
    {
        PyObject *tmp_assign_source_380;
        PyObject *tmp_import_name_from_361;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_361 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_361)) {
            tmp_assign_source_380 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_361,
                (PyObject *)moduledict_numpy,
                mod_consts[497],
                const_int_0
            );
        } else {
            tmp_assign_source_380 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_361, mod_consts[497]);
        }

        if (tmp_assign_source_380 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[497], tmp_assign_source_380);
    }
    {
        PyObject *tmp_assign_source_381;
        PyObject *tmp_import_name_from_362;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_362 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_362)) {
            tmp_assign_source_381 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_362,
                (PyObject *)moduledict_numpy,
                mod_consts[498],
                const_int_0
            );
        } else {
            tmp_assign_source_381 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_362, mod_consts[498]);
        }

        if (tmp_assign_source_381 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[498], tmp_assign_source_381);
    }
    {
        PyObject *tmp_assign_source_382;
        PyObject *tmp_import_name_from_363;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_363 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_363)) {
            tmp_assign_source_382 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_363,
                (PyObject *)moduledict_numpy,
                mod_consts[499],
                const_int_0
            );
        } else {
            tmp_assign_source_382 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_363, mod_consts[499]);
        }

        if (tmp_assign_source_382 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[499], tmp_assign_source_382);
    }
    {
        PyObject *tmp_assign_source_383;
        PyObject *tmp_import_name_from_364;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_364 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_364)) {
            tmp_assign_source_383 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_364,
                (PyObject *)moduledict_numpy,
                mod_consts[500],
                const_int_0
            );
        } else {
            tmp_assign_source_383 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_364, mod_consts[500]);
        }

        if (tmp_assign_source_383 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[500], tmp_assign_source_383);
    }
    {
        PyObject *tmp_assign_source_384;
        PyObject *tmp_import_name_from_365;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_365 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_365)) {
            tmp_assign_source_384 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_365,
                (PyObject *)moduledict_numpy,
                mod_consts[501],
                const_int_0
            );
        } else {
            tmp_assign_source_384 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_365, mod_consts[501]);
        }

        if (tmp_assign_source_384 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[501], tmp_assign_source_384);
    }
    {
        PyObject *tmp_assign_source_385;
        PyObject *tmp_import_name_from_366;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_366 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_366)) {
            tmp_assign_source_385 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_366,
                (PyObject *)moduledict_numpy,
                mod_consts[502],
                const_int_0
            );
        } else {
            tmp_assign_source_385 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_366, mod_consts[502]);
        }

        if (tmp_assign_source_385 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[502], tmp_assign_source_385);
    }
    {
        PyObject *tmp_assign_source_386;
        PyObject *tmp_import_name_from_367;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_367 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_367)) {
            tmp_assign_source_386 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_367,
                (PyObject *)moduledict_numpy,
                mod_consts[503],
                const_int_0
            );
        } else {
            tmp_assign_source_386 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_367, mod_consts[503]);
        }

        if (tmp_assign_source_386 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[503], tmp_assign_source_386);
    }
    {
        PyObject *tmp_assign_source_387;
        PyObject *tmp_import_name_from_368;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_368 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_368)) {
            tmp_assign_source_387 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_368,
                (PyObject *)moduledict_numpy,
                mod_consts[504],
                const_int_0
            );
        } else {
            tmp_assign_source_387 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_368, mod_consts[504]);
        }

        if (tmp_assign_source_387 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[504], tmp_assign_source_387);
    }
    {
        PyObject *tmp_assign_source_388;
        PyObject *tmp_import_name_from_369;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_369 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_369)) {
            tmp_assign_source_388 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_369,
                (PyObject *)moduledict_numpy,
                mod_consts[505],
                const_int_0
            );
        } else {
            tmp_assign_source_388 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_369, mod_consts[505]);
        }

        if (tmp_assign_source_388 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[505], tmp_assign_source_388);
    }
    {
        PyObject *tmp_assign_source_389;
        PyObject *tmp_import_name_from_370;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_370 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_370)) {
            tmp_assign_source_389 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_370,
                (PyObject *)moduledict_numpy,
                mod_consts[506],
                const_int_0
            );
        } else {
            tmp_assign_source_389 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_370, mod_consts[506]);
        }

        if (tmp_assign_source_389 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[506], tmp_assign_source_389);
    }
    {
        PyObject *tmp_assign_source_390;
        PyObject *tmp_import_name_from_371;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_371 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_371)) {
            tmp_assign_source_390 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_371,
                (PyObject *)moduledict_numpy,
                mod_consts[507],
                const_int_0
            );
        } else {
            tmp_assign_source_390 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_371, mod_consts[507]);
        }

        if (tmp_assign_source_390 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[507], tmp_assign_source_390);
    }
    {
        PyObject *tmp_assign_source_391;
        PyObject *tmp_import_name_from_372;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_372 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_372)) {
            tmp_assign_source_391 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_372,
                (PyObject *)moduledict_numpy,
                mod_consts[508],
                const_int_0
            );
        } else {
            tmp_assign_source_391 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_372, mod_consts[508]);
        }

        if (tmp_assign_source_391 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[508], tmp_assign_source_391);
    }
    {
        PyObject *tmp_assign_source_392;
        PyObject *tmp_import_name_from_373;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_373 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_373)) {
            tmp_assign_source_392 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_373,
                (PyObject *)moduledict_numpy,
                mod_consts[509],
                const_int_0
            );
        } else {
            tmp_assign_source_392 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_373, mod_consts[509]);
        }

        if (tmp_assign_source_392 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[509], tmp_assign_source_392);
    }
    {
        PyObject *tmp_assign_source_393;
        PyObject *tmp_import_name_from_374;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_374 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_374)) {
            tmp_assign_source_393 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_374,
                (PyObject *)moduledict_numpy,
                mod_consts[510],
                const_int_0
            );
        } else {
            tmp_assign_source_393 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_374, mod_consts[510]);
        }

        if (tmp_assign_source_393 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[510], tmp_assign_source_393);
    }
    {
        PyObject *tmp_assign_source_394;
        PyObject *tmp_import_name_from_375;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_375 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_375)) {
            tmp_assign_source_394 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_375,
                (PyObject *)moduledict_numpy,
                mod_consts[511],
                const_int_0
            );
        } else {
            tmp_assign_source_394 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_375, mod_consts[511]);
        }

        if (tmp_assign_source_394 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[511], tmp_assign_source_394);
    }
    {
        PyObject *tmp_assign_source_395;
        PyObject *tmp_import_name_from_376;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_376 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_376)) {
            tmp_assign_source_395 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_376,
                (PyObject *)moduledict_numpy,
                mod_consts[512],
                const_int_0
            );
        } else {
            tmp_assign_source_395 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_376, mod_consts[512]);
        }

        if (tmp_assign_source_395 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[512], tmp_assign_source_395);
    }
    {
        PyObject *tmp_assign_source_396;
        PyObject *tmp_import_name_from_377;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_377 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_377)) {
            tmp_assign_source_396 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_377,
                (PyObject *)moduledict_numpy,
                mod_consts[513],
                const_int_0
            );
        } else {
            tmp_assign_source_396 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_377, mod_consts[513]);
        }

        if (tmp_assign_source_396 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[513], tmp_assign_source_396);
    }
    {
        PyObject *tmp_assign_source_397;
        PyObject *tmp_import_name_from_378;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_378 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_378)) {
            tmp_assign_source_397 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_378,
                (PyObject *)moduledict_numpy,
                mod_consts[514],
                const_int_0
            );
        } else {
            tmp_assign_source_397 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_378, mod_consts[514]);
        }

        if (tmp_assign_source_397 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[514], tmp_assign_source_397);
    }
    {
        PyObject *tmp_assign_source_398;
        PyObject *tmp_import_name_from_379;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_379 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_379)) {
            tmp_assign_source_398 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_379,
                (PyObject *)moduledict_numpy,
                mod_consts[515],
                const_int_0
            );
        } else {
            tmp_assign_source_398 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_379, mod_consts[515]);
        }

        if (tmp_assign_source_398 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[515], tmp_assign_source_398);
    }
    {
        PyObject *tmp_assign_source_399;
        PyObject *tmp_import_name_from_380;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_380 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_380)) {
            tmp_assign_source_399 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_380,
                (PyObject *)moduledict_numpy,
                mod_consts[516],
                const_int_0
            );
        } else {
            tmp_assign_source_399 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_380, mod_consts[516]);
        }

        if (tmp_assign_source_399 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[516], tmp_assign_source_399);
    }
    {
        PyObject *tmp_assign_source_400;
        PyObject *tmp_import_name_from_381;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_381 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_381)) {
            tmp_assign_source_400 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_381,
                (PyObject *)moduledict_numpy,
                mod_consts[517],
                const_int_0
            );
        } else {
            tmp_assign_source_400 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_381, mod_consts[517]);
        }

        if (tmp_assign_source_400 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[517], tmp_assign_source_400);
    }
    {
        PyObject *tmp_assign_source_401;
        PyObject *tmp_import_name_from_382;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_382 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_382)) {
            tmp_assign_source_401 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_382,
                (PyObject *)moduledict_numpy,
                mod_consts[518],
                const_int_0
            );
        } else {
            tmp_assign_source_401 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_382, mod_consts[518]);
        }

        if (tmp_assign_source_401 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[518], tmp_assign_source_401);
    }
    {
        PyObject *tmp_assign_source_402;
        PyObject *tmp_import_name_from_383;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_383 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_383)) {
            tmp_assign_source_402 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_383,
                (PyObject *)moduledict_numpy,
                mod_consts[519],
                const_int_0
            );
        } else {
            tmp_assign_source_402 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_383, mod_consts[519]);
        }

        if (tmp_assign_source_402 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[519], tmp_assign_source_402);
    }
    {
        PyObject *tmp_assign_source_403;
        PyObject *tmp_import_name_from_384;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_384 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_384)) {
            tmp_assign_source_403 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_384,
                (PyObject *)moduledict_numpy,
                mod_consts[520],
                const_int_0
            );
        } else {
            tmp_assign_source_403 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_384, mod_consts[520]);
        }

        if (tmp_assign_source_403 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[520], tmp_assign_source_403);
    }
    {
        PyObject *tmp_assign_source_404;
        PyObject *tmp_import_name_from_385;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_385 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_385)) {
            tmp_assign_source_404 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_385,
                (PyObject *)moduledict_numpy,
                mod_consts[521],
                const_int_0
            );
        } else {
            tmp_assign_source_404 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_385, mod_consts[521]);
        }

        if (tmp_assign_source_404 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[521], tmp_assign_source_404);
    }
    {
        PyObject *tmp_assign_source_405;
        PyObject *tmp_import_name_from_386;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_386 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_386)) {
            tmp_assign_source_405 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_386,
                (PyObject *)moduledict_numpy,
                mod_consts[522],
                const_int_0
            );
        } else {
            tmp_assign_source_405 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_386, mod_consts[522]);
        }

        if (tmp_assign_source_405 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[522], tmp_assign_source_405);
    }
    {
        PyObject *tmp_assign_source_406;
        PyObject *tmp_import_name_from_387;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_387 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_387)) {
            tmp_assign_source_406 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_387,
                (PyObject *)moduledict_numpy,
                mod_consts[523],
                const_int_0
            );
        } else {
            tmp_assign_source_406 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_387, mod_consts[523]);
        }

        if (tmp_assign_source_406 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[523], tmp_assign_source_406);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_lineno_13 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_13 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    {
        PyObject *tmp_assign_source_407;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_16 = mod_consts[524];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[525];
        tmp_level_value_15 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 212;
        tmp_assign_source_407 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_assign_source_407 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_6__module == NULL);
        tmp_import_from_6__module = tmp_assign_source_407;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_408;
        PyObject *tmp_import_name_from_388;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_388 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_388)) {
            tmp_assign_source_408 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_388,
                (PyObject *)moduledict_numpy,
                mod_consts[526],
                const_int_0
            );
        } else {
            tmp_assign_source_408 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_388, mod_consts[526]);
        }

        if (tmp_assign_source_408 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 212;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[526], tmp_assign_source_408);
    }
    {
        PyObject *tmp_assign_source_409;
        PyObject *tmp_import_name_from_389;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_389 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_389)) {
            tmp_assign_source_409 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_389,
                (PyObject *)moduledict_numpy,
                mod_consts[527],
                const_int_0
            );
        } else {
            tmp_assign_source_409 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_389, mod_consts[527]);
        }

        if (tmp_assign_source_409 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 212;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[527], tmp_assign_source_409);
    }
    {
        PyObject *tmp_assign_source_410;
        PyObject *tmp_import_name_from_390;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_390 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_390)) {
            tmp_assign_source_410 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_390,
                (PyObject *)moduledict_numpy,
                mod_consts[528],
                const_int_0
            );
        } else {
            tmp_assign_source_410 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_390, mod_consts[528]);
        }

        if (tmp_assign_source_410 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 212;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[528], tmp_assign_source_410);
    }
    {
        PyObject *tmp_assign_source_411;
        PyObject *tmp_import_name_from_391;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_391 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_391)) {
            tmp_assign_source_411 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_391,
                (PyObject *)moduledict_numpy,
                mod_consts[529],
                const_int_0
            );
        } else {
            tmp_assign_source_411 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_391, mod_consts[529]);
        }

        if (tmp_assign_source_411 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 212;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[529], tmp_assign_source_411);
    }
    {
        PyObject *tmp_assign_source_412;
        PyObject *tmp_import_name_from_392;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_392 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_392)) {
            tmp_assign_source_412 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_392,
                (PyObject *)moduledict_numpy,
                mod_consts[530],
                const_int_0
            );
        } else {
            tmp_assign_source_412 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_392, mod_consts[530]);
        }

        if (tmp_assign_source_412 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 212;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[530], tmp_assign_source_412);
    }
    {
        PyObject *tmp_assign_source_413;
        PyObject *tmp_import_name_from_393;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_393 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_393)) {
            tmp_assign_source_413 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_393,
                (PyObject *)moduledict_numpy,
                mod_consts[531],
                const_int_0
            );
        } else {
            tmp_assign_source_413 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_393, mod_consts[531]);
        }

        if (tmp_assign_source_413 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 212;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[531], tmp_assign_source_413);
    }
    {
        PyObject *tmp_assign_source_414;
        PyObject *tmp_import_name_from_394;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_394 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_394)) {
            tmp_assign_source_414 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_394,
                (PyObject *)moduledict_numpy,
                mod_consts[532],
                const_int_0
            );
        } else {
            tmp_assign_source_414 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_394, mod_consts[532]);
        }

        if (tmp_assign_source_414 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 212;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[532], tmp_assign_source_414);
    }
    {
        PyObject *tmp_assign_source_415;
        PyObject *tmp_import_name_from_395;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_395 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_395)) {
            tmp_assign_source_415 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_395,
                (PyObject *)moduledict_numpy,
                mod_consts[533],
                const_int_0
            );
        } else {
            tmp_assign_source_415 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_395, mod_consts[533]);
        }

        if (tmp_assign_source_415 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 212;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[533], tmp_assign_source_415);
    }
    {
        PyObject *tmp_assign_source_416;
        PyObject *tmp_import_name_from_396;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_396 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_396)) {
            tmp_assign_source_416 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_396,
                (PyObject *)moduledict_numpy,
                mod_consts[534],
                const_int_0
            );
        } else {
            tmp_assign_source_416 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_396, mod_consts[534]);
        }

        if (tmp_assign_source_416 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 212;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[534], tmp_assign_source_416);
    }
    {
        PyObject *tmp_assign_source_417;
        PyObject *tmp_import_name_from_397;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_397 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_397)) {
            tmp_assign_source_417 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_397,
                (PyObject *)moduledict_numpy,
                mod_consts[535],
                const_int_0
            );
        } else {
            tmp_assign_source_417 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_397, mod_consts[535]);
        }

        if (tmp_assign_source_417 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 212;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[535], tmp_assign_source_417);
    }
    {
        PyObject *tmp_assign_source_418;
        PyObject *tmp_import_name_from_398;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_398 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_398)) {
            tmp_assign_source_418 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_398,
                (PyObject *)moduledict_numpy,
                mod_consts[536],
                const_int_0
            );
        } else {
            tmp_assign_source_418 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_398, mod_consts[536]);
        }

        if (tmp_assign_source_418 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 212;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[536], tmp_assign_source_418);
    }
    {
        PyObject *tmp_assign_source_419;
        PyObject *tmp_import_name_from_399;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_399 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_399)) {
            tmp_assign_source_419 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_399,
                (PyObject *)moduledict_numpy,
                mod_consts[537],
                const_int_0
            );
        } else {
            tmp_assign_source_419 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_399, mod_consts[537]);
        }

        if (tmp_assign_source_419 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 212;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[537], tmp_assign_source_419);
    }
    {
        PyObject *tmp_assign_source_420;
        PyObject *tmp_import_name_from_400;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_400 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_400)) {
            tmp_assign_source_420 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_400,
                (PyObject *)moduledict_numpy,
                mod_consts[538],
                const_int_0
            );
        } else {
            tmp_assign_source_420 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_400, mod_consts[538]);
        }

        if (tmp_assign_source_420 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 212;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[538], tmp_assign_source_420);
    }
    {
        PyObject *tmp_assign_source_421;
        PyObject *tmp_import_name_from_401;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_401 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_401)) {
            tmp_assign_source_421 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_401,
                (PyObject *)moduledict_numpy,
                mod_consts[539],
                const_int_0
            );
        } else {
            tmp_assign_source_421 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_401, mod_consts[539]);
        }

        if (tmp_assign_source_421 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 212;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[539], tmp_assign_source_421);
    }
    {
        PyObject *tmp_assign_source_422;
        PyObject *tmp_import_name_from_402;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_402 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_402)) {
            tmp_assign_source_422 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_402,
                (PyObject *)moduledict_numpy,
                mod_consts[540],
                const_int_0
            );
        } else {
            tmp_assign_source_422 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_402, mod_consts[540]);
        }

        if (tmp_assign_source_422 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 212;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[540], tmp_assign_source_422);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_lineno_14 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_14 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    {
        PyObject *tmp_assign_source_423;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_17 = mod_consts[541];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = mod_consts[542];
        tmp_level_value_16 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 217;
        tmp_assign_source_423 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_assign_source_423 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_7__module == NULL);
        tmp_import_from_7__module = tmp_assign_source_423;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_424;
        PyObject *tmp_import_name_from_403;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_403 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_403)) {
            tmp_assign_source_424 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_403,
                (PyObject *)moduledict_numpy,
                mod_consts[543],
                const_int_0
            );
        } else {
            tmp_assign_source_424 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_403, mod_consts[543]);
        }

        if (tmp_assign_source_424 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 217;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[543], tmp_assign_source_424);
    }
    {
        PyObject *tmp_assign_source_425;
        PyObject *tmp_import_name_from_404;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_404 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_404)) {
            tmp_assign_source_425 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_404,
                (PyObject *)moduledict_numpy,
                mod_consts[544],
                const_int_0
            );
        } else {
            tmp_assign_source_425 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_404, mod_consts[544]);
        }

        if (tmp_assign_source_425 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 217;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[544], tmp_assign_source_425);
    }
    {
        PyObject *tmp_assign_source_426;
        PyObject *tmp_import_name_from_405;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_405 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_405)) {
            tmp_assign_source_426 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_405,
                (PyObject *)moduledict_numpy,
                mod_consts[545],
                const_int_0
            );
        } else {
            tmp_assign_source_426 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_405, mod_consts[545]);
        }

        if (tmp_assign_source_426 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 217;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[545], tmp_assign_source_426);
    }
    {
        PyObject *tmp_assign_source_427;
        PyObject *tmp_import_name_from_406;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_406 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_406)) {
            tmp_assign_source_427 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_406,
                (PyObject *)moduledict_numpy,
                mod_consts[546],
                const_int_0
            );
        } else {
            tmp_assign_source_427 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_406, mod_consts[546]);
        }

        if (tmp_assign_source_427 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 217;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[546], tmp_assign_source_427);
    }
    {
        PyObject *tmp_assign_source_428;
        PyObject *tmp_import_name_from_407;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_407 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_407)) {
            tmp_assign_source_428 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_407,
                (PyObject *)moduledict_numpy,
                mod_consts[547],
                const_int_0
            );
        } else {
            tmp_assign_source_428 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_407, mod_consts[547]);
        }

        if (tmp_assign_source_428 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 217;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[547], tmp_assign_source_428);
    }
    {
        PyObject *tmp_assign_source_429;
        PyObject *tmp_import_name_from_408;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_408 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_408)) {
            tmp_assign_source_429 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_408,
                (PyObject *)moduledict_numpy,
                mod_consts[548],
                const_int_0
            );
        } else {
            tmp_assign_source_429 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_408, mod_consts[548]);
        }

        if (tmp_assign_source_429 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 217;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[548], tmp_assign_source_429);
    }
    {
        PyObject *tmp_assign_source_430;
        PyObject *tmp_import_name_from_409;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_409 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_409)) {
            tmp_assign_source_430 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_409,
                (PyObject *)moduledict_numpy,
                mod_consts[549],
                const_int_0
            );
        } else {
            tmp_assign_source_430 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_409, mod_consts[549]);
        }

        if (tmp_assign_source_430 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 217;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[549], tmp_assign_source_430);
    }
    {
        PyObject *tmp_assign_source_431;
        PyObject *tmp_import_name_from_410;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_410 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_410)) {
            tmp_assign_source_431 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_410,
                (PyObject *)moduledict_numpy,
                mod_consts[550],
                const_int_0
            );
        } else {
            tmp_assign_source_431 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_410, mod_consts[550]);
        }

        if (tmp_assign_source_431 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 217;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[550], tmp_assign_source_431);
    }
    {
        PyObject *tmp_assign_source_432;
        PyObject *tmp_import_name_from_411;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_411 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_411)) {
            tmp_assign_source_432 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_411,
                (PyObject *)moduledict_numpy,
                mod_consts[551],
                const_int_0
            );
        } else {
            tmp_assign_source_432 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_411, mod_consts[551]);
        }

        if (tmp_assign_source_432 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 217;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[551], tmp_assign_source_432);
    }
    {
        PyObject *tmp_assign_source_433;
        PyObject *tmp_import_name_from_412;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_412 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_412)) {
            tmp_assign_source_433 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_412,
                (PyObject *)moduledict_numpy,
                mod_consts[552],
                const_int_0
            );
        } else {
            tmp_assign_source_433 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_412, mod_consts[552]);
        }

        if (tmp_assign_source_433 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 217;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[552], tmp_assign_source_433);
    }
    {
        PyObject *tmp_assign_source_434;
        PyObject *tmp_import_name_from_413;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_413 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_413)) {
            tmp_assign_source_434 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_413,
                (PyObject *)moduledict_numpy,
                mod_consts[553],
                const_int_0
            );
        } else {
            tmp_assign_source_434 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_413, mod_consts[553]);
        }

        if (tmp_assign_source_434 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 217;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[553], tmp_assign_source_434);
    }
    {
        PyObject *tmp_assign_source_435;
        PyObject *tmp_import_name_from_414;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_414 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_414)) {
            tmp_assign_source_435 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_414,
                (PyObject *)moduledict_numpy,
                mod_consts[92],
                const_int_0
            );
        } else {
            tmp_assign_source_435 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_414, mod_consts[92]);
        }

        if (tmp_assign_source_435 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 217;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_435);
    }
    {
        PyObject *tmp_assign_source_436;
        PyObject *tmp_import_name_from_415;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_415 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_415)) {
            tmp_assign_source_436 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_415,
                (PyObject *)moduledict_numpy,
                mod_consts[554],
                const_int_0
            );
        } else {
            tmp_assign_source_436 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_415, mod_consts[554]);
        }

        if (tmp_assign_source_436 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 217;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[554], tmp_assign_source_436);
    }
    {
        PyObject *tmp_assign_source_437;
        PyObject *tmp_import_name_from_416;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_416 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_416)) {
            tmp_assign_source_437 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_416,
                (PyObject *)moduledict_numpy,
                mod_consts[555],
                const_int_0
            );
        } else {
            tmp_assign_source_437 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_416, mod_consts[555]);
        }

        if (tmp_assign_source_437 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 217;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[555], tmp_assign_source_437);
    }
    {
        PyObject *tmp_assign_source_438;
        PyObject *tmp_import_name_from_417;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_417 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_417)) {
            tmp_assign_source_438 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_417,
                (PyObject *)moduledict_numpy,
                mod_consts[556],
                const_int_0
            );
        } else {
            tmp_assign_source_438 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_417, mod_consts[556]);
        }

        if (tmp_assign_source_438 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 217;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[556], tmp_assign_source_438);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_lineno_15 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_15 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;
    {
        PyObject *tmp_assign_source_439;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_18 = mod_consts[557];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = mod_consts[558];
        tmp_level_value_17 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 222;
        tmp_assign_source_439 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_assign_source_439 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_8__module == NULL);
        tmp_import_from_8__module = tmp_assign_source_439;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_440;
        PyObject *tmp_import_name_from_418;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_418 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_418)) {
            tmp_assign_source_440 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_418,
                (PyObject *)moduledict_numpy,
                mod_consts[559],
                const_int_0
            );
        } else {
            tmp_assign_source_440 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_418, mod_consts[559]);
        }

        if (tmp_assign_source_440 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 222;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[559], tmp_assign_source_440);
    }
    {
        PyObject *tmp_assign_source_441;
        PyObject *tmp_import_name_from_419;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_419 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_419)) {
            tmp_assign_source_441 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_419,
                (PyObject *)moduledict_numpy,
                mod_consts[560],
                const_int_0
            );
        } else {
            tmp_assign_source_441 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_419, mod_consts[560]);
        }

        if (tmp_assign_source_441 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 222;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[560], tmp_assign_source_441);
    }
    {
        PyObject *tmp_assign_source_442;
        PyObject *tmp_import_name_from_420;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_420 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_420)) {
            tmp_assign_source_442 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_420,
                (PyObject *)moduledict_numpy,
                mod_consts[561],
                const_int_0
            );
        } else {
            tmp_assign_source_442 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_420, mod_consts[561]);
        }

        if (tmp_assign_source_442 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 222;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[561], tmp_assign_source_442);
    }
    {
        PyObject *tmp_assign_source_443;
        PyObject *tmp_import_name_from_421;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_421 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_421)) {
            tmp_assign_source_443 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_421,
                (PyObject *)moduledict_numpy,
                mod_consts[562],
                const_int_0
            );
        } else {
            tmp_assign_source_443 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_421, mod_consts[562]);
        }

        if (tmp_assign_source_443 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 222;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[562], tmp_assign_source_443);
    }
    {
        PyObject *tmp_assign_source_444;
        PyObject *tmp_import_name_from_422;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_422 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_422)) {
            tmp_assign_source_444 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_422,
                (PyObject *)moduledict_numpy,
                mod_consts[563],
                const_int_0
            );
        } else {
            tmp_assign_source_444 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_422, mod_consts[563]);
        }

        if (tmp_assign_source_444 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 222;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[563], tmp_assign_source_444);
    }
    {
        PyObject *tmp_assign_source_445;
        PyObject *tmp_import_name_from_423;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_423 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_423)) {
            tmp_assign_source_445 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_423,
                (PyObject *)moduledict_numpy,
                mod_consts[564],
                const_int_0
            );
        } else {
            tmp_assign_source_445 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_423, mod_consts[564]);
        }

        if (tmp_assign_source_445 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 222;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[564], tmp_assign_source_445);
    }
    {
        PyObject *tmp_assign_source_446;
        PyObject *tmp_import_name_from_424;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_424 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_424)) {
            tmp_assign_source_446 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_424,
                (PyObject *)moduledict_numpy,
                mod_consts[565],
                const_int_0
            );
        } else {
            tmp_assign_source_446 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_424, mod_consts[565]);
        }

        if (tmp_assign_source_446 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 222;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[565], tmp_assign_source_446);
    }
    {
        PyObject *tmp_assign_source_447;
        PyObject *tmp_import_name_from_425;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_425 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_425)) {
            tmp_assign_source_447 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_425,
                (PyObject *)moduledict_numpy,
                mod_consts[566],
                const_int_0
            );
        } else {
            tmp_assign_source_447 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_425, mod_consts[566]);
        }

        if (tmp_assign_source_447 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 222;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[566], tmp_assign_source_447);
    }
    {
        PyObject *tmp_assign_source_448;
        PyObject *tmp_import_name_from_426;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_426 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_426)) {
            tmp_assign_source_448 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_426,
                (PyObject *)moduledict_numpy,
                mod_consts[567],
                const_int_0
            );
        } else {
            tmp_assign_source_448 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_426, mod_consts[567]);
        }

        if (tmp_assign_source_448 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 222;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[567], tmp_assign_source_448);
    }
    {
        PyObject *tmp_assign_source_449;
        PyObject *tmp_import_name_from_427;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_427 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_427)) {
            tmp_assign_source_449 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_427,
                (PyObject *)moduledict_numpy,
                mod_consts[568],
                const_int_0
            );
        } else {
            tmp_assign_source_449 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_427, mod_consts[568]);
        }

        if (tmp_assign_source_449 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 222;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[568], tmp_assign_source_449);
    }
    {
        PyObject *tmp_assign_source_450;
        PyObject *tmp_import_name_from_428;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_428 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_428)) {
            tmp_assign_source_450 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_428,
                (PyObject *)moduledict_numpy,
                mod_consts[569],
                const_int_0
            );
        } else {
            tmp_assign_source_450 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_428, mod_consts[569]);
        }

        if (tmp_assign_source_450 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 222;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[569], tmp_assign_source_450);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_lineno_16 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_16 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_8__module);
    Py_DECREF(tmp_import_from_8__module);
    tmp_import_from_8__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_import_from_8__module);
    Py_DECREF(tmp_import_from_8__module);
    tmp_import_from_8__module = NULL;
    {
        PyObject *tmp_assign_source_451;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_19 = mod_consts[570];
        tmp_globals_arg_value_18 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = mod_consts[571];
        tmp_level_value_18 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 226;
        tmp_assign_source_451 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
        if (tmp_assign_source_451 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_9__module == NULL);
        tmp_import_from_9__module = tmp_assign_source_451;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_452;
        PyObject *tmp_import_name_from_429;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_429 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_429)) {
            tmp_assign_source_452 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_429,
                (PyObject *)moduledict_numpy,
                mod_consts[572],
                const_int_0
            );
        } else {
            tmp_assign_source_452 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_429, mod_consts[572]);
        }

        if (tmp_assign_source_452 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 226;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[572], tmp_assign_source_452);
    }
    {
        PyObject *tmp_assign_source_453;
        PyObject *tmp_import_name_from_430;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_430 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_430)) {
            tmp_assign_source_453 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_430,
                (PyObject *)moduledict_numpy,
                mod_consts[573],
                const_int_0
            );
        } else {
            tmp_assign_source_453 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_430, mod_consts[573]);
        }

        if (tmp_assign_source_453 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 226;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[573], tmp_assign_source_453);
    }
    {
        PyObject *tmp_assign_source_454;
        PyObject *tmp_import_name_from_431;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_431 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_431)) {
            tmp_assign_source_454 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_431,
                (PyObject *)moduledict_numpy,
                mod_consts[574],
                const_int_0
            );
        } else {
            tmp_assign_source_454 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_431, mod_consts[574]);
        }

        if (tmp_assign_source_454 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 226;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[574], tmp_assign_source_454);
    }
    {
        PyObject *tmp_assign_source_455;
        PyObject *tmp_import_name_from_432;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_432 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_432)) {
            tmp_assign_source_455 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_432,
                (PyObject *)moduledict_numpy,
                mod_consts[575],
                const_int_0
            );
        } else {
            tmp_assign_source_455 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_432, mod_consts[575]);
        }

        if (tmp_assign_source_455 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 226;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[575], tmp_assign_source_455);
    }
    {
        PyObject *tmp_assign_source_456;
        PyObject *tmp_import_name_from_433;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_433 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_433)) {
            tmp_assign_source_456 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_433,
                (PyObject *)moduledict_numpy,
                mod_consts[576],
                const_int_0
            );
        } else {
            tmp_assign_source_456 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_433, mod_consts[576]);
        }

        if (tmp_assign_source_456 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 226;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[576], tmp_assign_source_456);
    }
    {
        PyObject *tmp_assign_source_457;
        PyObject *tmp_import_name_from_434;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_434 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_434)) {
            tmp_assign_source_457 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_434,
                (PyObject *)moduledict_numpy,
                mod_consts[577],
                const_int_0
            );
        } else {
            tmp_assign_source_457 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_434, mod_consts[577]);
        }

        if (tmp_assign_source_457 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 226;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[577], tmp_assign_source_457);
    }
    {
        PyObject *tmp_assign_source_458;
        PyObject *tmp_import_name_from_435;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_435 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_435)) {
            tmp_assign_source_458 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_435,
                (PyObject *)moduledict_numpy,
                mod_consts[578],
                const_int_0
            );
        } else {
            tmp_assign_source_458 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_435, mod_consts[578]);
        }

        if (tmp_assign_source_458 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 226;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[578], tmp_assign_source_458);
    }
    {
        PyObject *tmp_assign_source_459;
        PyObject *tmp_import_name_from_436;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_436 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_436)) {
            tmp_assign_source_459 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_436,
                (PyObject *)moduledict_numpy,
                mod_consts[579],
                const_int_0
            );
        } else {
            tmp_assign_source_459 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_436, mod_consts[579]);
        }

        if (tmp_assign_source_459 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 226;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[579], tmp_assign_source_459);
    }
    {
        PyObject *tmp_assign_source_460;
        PyObject *tmp_import_name_from_437;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_437 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_437)) {
            tmp_assign_source_460 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_437,
                (PyObject *)moduledict_numpy,
                mod_consts[580],
                const_int_0
            );
        } else {
            tmp_assign_source_460 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_437, mod_consts[580]);
        }

        if (tmp_assign_source_460 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 226;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[580], tmp_assign_source_460);
    }
    {
        PyObject *tmp_assign_source_461;
        PyObject *tmp_import_name_from_438;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_438 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_438)) {
            tmp_assign_source_461 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_438,
                (PyObject *)moduledict_numpy,
                mod_consts[581],
                const_int_0
            );
        } else {
            tmp_assign_source_461 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_438, mod_consts[581]);
        }

        if (tmp_assign_source_461 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 226;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[581], tmp_assign_source_461);
    }
    {
        PyObject *tmp_assign_source_462;
        PyObject *tmp_import_name_from_439;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_439 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_439)) {
            tmp_assign_source_462 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_439,
                (PyObject *)moduledict_numpy,
                mod_consts[582],
                const_int_0
            );
        } else {
            tmp_assign_source_462 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_439, mod_consts[582]);
        }

        if (tmp_assign_source_462 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 226;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[582], tmp_assign_source_462);
    }
    {
        PyObject *tmp_assign_source_463;
        PyObject *tmp_import_name_from_440;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_440 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_440)) {
            tmp_assign_source_463 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_440,
                (PyObject *)moduledict_numpy,
                mod_consts[583],
                const_int_0
            );
        } else {
            tmp_assign_source_463 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_440, mod_consts[583]);
        }

        if (tmp_assign_source_463 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 226;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[583], tmp_assign_source_463);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_lineno_17 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_17 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_9__module);
    Py_DECREF(tmp_import_from_9__module);
    tmp_import_from_9__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_import_from_9__module);
    Py_DECREF(tmp_import_from_9__module);
    tmp_import_from_9__module = NULL;
    {
        PyObject *tmp_assign_source_464;
        PyObject *tmp_name_value_20;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_20 = mod_consts[584];
        tmp_globals_arg_value_19 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = mod_consts[585];
        tmp_level_value_19 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 230;
        tmp_assign_source_464 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
        if (tmp_assign_source_464 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_10__module == NULL);
        tmp_import_from_10__module = tmp_assign_source_464;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_465;
        PyObject *tmp_import_name_from_441;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_441 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_441)) {
            tmp_assign_source_465 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_441,
                (PyObject *)moduledict_numpy,
                mod_consts[586],
                const_int_0
            );
        } else {
            tmp_assign_source_465 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_441, mod_consts[586]);
        }

        if (tmp_assign_source_465 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 230;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[586], tmp_assign_source_465);
    }
    {
        PyObject *tmp_assign_source_466;
        PyObject *tmp_import_name_from_442;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_442 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_442)) {
            tmp_assign_source_466 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_442,
                (PyObject *)moduledict_numpy,
                mod_consts[587],
                const_int_0
            );
        } else {
            tmp_assign_source_466 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_442, mod_consts[587]);
        }

        if (tmp_assign_source_466 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 230;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[587], tmp_assign_source_466);
    }
    {
        PyObject *tmp_assign_source_467;
        PyObject *tmp_import_name_from_443;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_443 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_443)) {
            tmp_assign_source_467 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_443,
                (PyObject *)moduledict_numpy,
                mod_consts[588],
                const_int_0
            );
        } else {
            tmp_assign_source_467 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_443, mod_consts[588]);
        }

        if (tmp_assign_source_467 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 230;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[588], tmp_assign_source_467);
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_lineno_18 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_18 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_10__module);
    Py_DECREF(tmp_import_from_10__module);
    tmp_import_from_10__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_import_from_10__module);
    Py_DECREF(tmp_import_from_10__module);
    tmp_import_from_10__module = NULL;
    {
        PyObject *tmp_assign_source_468;
        PyObject *tmp_import_name_from_444;
        PyObject *tmp_name_value_21;
        PyObject *tmp_globals_arg_value_20;
        PyObject *tmp_locals_arg_value_20;
        PyObject *tmp_fromlist_value_20;
        PyObject *tmp_level_value_20;
        tmp_name_value_21 = mod_consts[589];
        tmp_globals_arg_value_20 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_20 = Py_None;
        tmp_fromlist_value_20 = mod_consts[590];
        tmp_level_value_20 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 231;
        tmp_import_name_from_444 = IMPORT_MODULE5(tstate, tmp_name_value_21, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
        if (tmp_import_name_from_444 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_444)) {
            tmp_assign_source_468 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_444,
                (PyObject *)moduledict_numpy,
                mod_consts[591],
                const_int_0
            );
        } else {
            tmp_assign_source_468 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_444, mod_consts[591]);
        }

        Py_DECREF(tmp_import_name_from_444);
        if (tmp_assign_source_468 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[591], tmp_assign_source_468);
    }
    {
        PyObject *tmp_assign_source_469;
        PyObject *tmp_name_value_22;
        PyObject *tmp_globals_arg_value_21;
        PyObject *tmp_locals_arg_value_21;
        PyObject *tmp_fromlist_value_21;
        PyObject *tmp_level_value_21;
        tmp_name_value_22 = mod_consts[592];
        tmp_globals_arg_value_21 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_21 = Py_None;
        tmp_fromlist_value_21 = mod_consts[593];
        tmp_level_value_21 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 232;
        tmp_assign_source_469 = IMPORT_MODULE5(tstate, tmp_name_value_22, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
        if (tmp_assign_source_469 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_11__module == NULL);
        tmp_import_from_11__module = tmp_assign_source_469;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_470;
        PyObject *tmp_import_name_from_445;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_445 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_445)) {
            tmp_assign_source_470 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_445,
                (PyObject *)moduledict_numpy,
                mod_consts[594],
                const_int_0
            );
        } else {
            tmp_assign_source_470 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_445, mod_consts[594]);
        }

        if (tmp_assign_source_470 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 232;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[594], tmp_assign_source_470);
    }
    {
        PyObject *tmp_assign_source_471;
        PyObject *tmp_import_name_from_446;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_446 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_446)) {
            tmp_assign_source_471 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_446,
                (PyObject *)moduledict_numpy,
                mod_consts[595],
                const_int_0
            );
        } else {
            tmp_assign_source_471 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_446, mod_consts[595]);
        }

        if (tmp_assign_source_471 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 232;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[595], tmp_assign_source_471);
    }
    {
        PyObject *tmp_assign_source_472;
        PyObject *tmp_import_name_from_447;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_447 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_447)) {
            tmp_assign_source_472 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_447,
                (PyObject *)moduledict_numpy,
                mod_consts[596],
                const_int_0
            );
        } else {
            tmp_assign_source_472 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_447, mod_consts[596]);
        }

        if (tmp_assign_source_472 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 232;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[596], tmp_assign_source_472);
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_lineno_19 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_19 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_11__module);
    Py_DECREF(tmp_import_from_11__module);
    tmp_import_from_11__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_import_from_11__module);
    Py_DECREF(tmp_import_from_11__module);
    tmp_import_from_11__module = NULL;
    {
        PyObject *tmp_assign_source_473;
        PyObject *tmp_name_value_23;
        PyObject *tmp_globals_arg_value_22;
        PyObject *tmp_locals_arg_value_22;
        PyObject *tmp_fromlist_value_22;
        PyObject *tmp_level_value_22;
        tmp_name_value_23 = mod_consts[597];
        tmp_globals_arg_value_22 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_22 = Py_None;
        tmp_fromlist_value_22 = mod_consts[598];
        tmp_level_value_22 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 235;
        tmp_assign_source_473 = IMPORT_MODULE5(tstate, tmp_name_value_23, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
        if (tmp_assign_source_473 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_12__module == NULL);
        tmp_import_from_12__module = tmp_assign_source_473;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_474;
        PyObject *tmp_import_name_from_448;
        CHECK_OBJECT(tmp_import_from_12__module);
        tmp_import_name_from_448 = tmp_import_from_12__module;
        if (PyModule_Check(tmp_import_name_from_448)) {
            tmp_assign_source_474 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_448,
                (PyObject *)moduledict_numpy,
                mod_consts[599],
                const_int_0
            );
        } else {
            tmp_assign_source_474 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_448, mod_consts[599]);
        }

        if (tmp_assign_source_474 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 235;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[599], tmp_assign_source_474);
    }
    {
        PyObject *tmp_assign_source_475;
        PyObject *tmp_import_name_from_449;
        CHECK_OBJECT(tmp_import_from_12__module);
        tmp_import_name_from_449 = tmp_import_from_12__module;
        if (PyModule_Check(tmp_import_name_from_449)) {
            tmp_assign_source_475 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_449,
                (PyObject *)moduledict_numpy,
                mod_consts[600],
                const_int_0
            );
        } else {
            tmp_assign_source_475 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_449, mod_consts[600]);
        }

        if (tmp_assign_source_475 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 235;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[600], tmp_assign_source_475);
    }
    {
        PyObject *tmp_assign_source_476;
        PyObject *tmp_import_name_from_450;
        CHECK_OBJECT(tmp_import_from_12__module);
        tmp_import_name_from_450 = tmp_import_from_12__module;
        if (PyModule_Check(tmp_import_name_from_450)) {
            tmp_assign_source_476 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_450,
                (PyObject *)moduledict_numpy,
                mod_consts[601],
                const_int_0
            );
        } else {
            tmp_assign_source_476 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_450, mod_consts[601]);
        }

        if (tmp_assign_source_476 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 235;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[601], tmp_assign_source_476);
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_lineno_20 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_20 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_12__module);
    Py_DECREF(tmp_import_from_12__module);
    tmp_import_from_12__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_import_from_12__module);
    Py_DECREF(tmp_import_from_12__module);
    tmp_import_from_12__module = NULL;
    {
        PyObject *tmp_assign_source_477;
        PyObject *tmp_name_value_24;
        PyObject *tmp_globals_arg_value_23;
        PyObject *tmp_locals_arg_value_23;
        PyObject *tmp_fromlist_value_23;
        PyObject *tmp_level_value_23;
        tmp_name_value_24 = mod_consts[602];
        tmp_globals_arg_value_23 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_23 = Py_None;
        tmp_fromlist_value_23 = mod_consts[603];
        tmp_level_value_23 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 238;
        tmp_assign_source_477 = IMPORT_MODULE5(tstate, tmp_name_value_24, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
        if (tmp_assign_source_477 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_13__module == NULL);
        tmp_import_from_13__module = tmp_assign_source_477;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_478;
        PyObject *tmp_import_name_from_451;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_451 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_451)) {
            tmp_assign_source_478 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_451,
                (PyObject *)moduledict_numpy,
                mod_consts[604],
                const_int_0
            );
        } else {
            tmp_assign_source_478 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_451, mod_consts[604]);
        }

        if (tmp_assign_source_478 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 238;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[604], tmp_assign_source_478);
    }
    {
        PyObject *tmp_assign_source_479;
        PyObject *tmp_import_name_from_452;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_452 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_452)) {
            tmp_assign_source_479 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_452,
                (PyObject *)moduledict_numpy,
                mod_consts[605],
                const_int_0
            );
        } else {
            tmp_assign_source_479 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_452, mod_consts[605]);
        }

        if (tmp_assign_source_479 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 238;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[605], tmp_assign_source_479);
    }
    {
        PyObject *tmp_assign_source_480;
        PyObject *tmp_import_name_from_453;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_453 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_453)) {
            tmp_assign_source_480 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_453,
                (PyObject *)moduledict_numpy,
                mod_consts[606],
                const_int_0
            );
        } else {
            tmp_assign_source_480 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_453, mod_consts[606]);
        }

        if (tmp_assign_source_480 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 238;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[606], tmp_assign_source_480);
    }
    {
        PyObject *tmp_assign_source_481;
        PyObject *tmp_import_name_from_454;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_454 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_454)) {
            tmp_assign_source_481 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_454,
                (PyObject *)moduledict_numpy,
                mod_consts[607],
                const_int_0
            );
        } else {
            tmp_assign_source_481 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_454, mod_consts[607]);
        }

        if (tmp_assign_source_481 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 238;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[607], tmp_assign_source_481);
    }
    {
        PyObject *tmp_assign_source_482;
        PyObject *tmp_import_name_from_455;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_455 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_455)) {
            tmp_assign_source_482 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_455,
                (PyObject *)moduledict_numpy,
                mod_consts[608],
                const_int_0
            );
        } else {
            tmp_assign_source_482 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_455, mod_consts[608]);
        }

        if (tmp_assign_source_482 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 238;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[608], tmp_assign_source_482);
    }
    {
        PyObject *tmp_assign_source_483;
        PyObject *tmp_import_name_from_456;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_456 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_456)) {
            tmp_assign_source_483 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_456,
                (PyObject *)moduledict_numpy,
                mod_consts[609],
                const_int_0
            );
        } else {
            tmp_assign_source_483 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_456, mod_consts[609]);
        }

        if (tmp_assign_source_483 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 238;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[609], tmp_assign_source_483);
    }
    {
        PyObject *tmp_assign_source_484;
        PyObject *tmp_import_name_from_457;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_457 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_457)) {
            tmp_assign_source_484 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_457,
                (PyObject *)moduledict_numpy,
                mod_consts[610],
                const_int_0
            );
        } else {
            tmp_assign_source_484 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_457, mod_consts[610]);
        }

        if (tmp_assign_source_484 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 238;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[610], tmp_assign_source_484);
    }
    {
        PyObject *tmp_assign_source_485;
        PyObject *tmp_import_name_from_458;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_458 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_458)) {
            tmp_assign_source_485 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_458,
                (PyObject *)moduledict_numpy,
                mod_consts[78],
                const_int_0
            );
        } else {
            tmp_assign_source_485 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_458, mod_consts[78]);
        }

        if (tmp_assign_source_485 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 238;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_485);
    }
    {
        PyObject *tmp_assign_source_486;
        PyObject *tmp_import_name_from_459;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_459 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_459)) {
            tmp_assign_source_486 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_459,
                (PyObject *)moduledict_numpy,
                mod_consts[79],
                const_int_0
            );
        } else {
            tmp_assign_source_486 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_459, mod_consts[79]);
        }

        if (tmp_assign_source_486 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 238;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_486);
    }
    {
        PyObject *tmp_assign_source_487;
        PyObject *tmp_import_name_from_460;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_460 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_460)) {
            tmp_assign_source_487 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_460,
                (PyObject *)moduledict_numpy,
                mod_consts[611],
                const_int_0
            );
        } else {
            tmp_assign_source_487 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_460, mod_consts[611]);
        }

        if (tmp_assign_source_487 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 238;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[611], tmp_assign_source_487);
    }
    {
        PyObject *tmp_assign_source_488;
        PyObject *tmp_import_name_from_461;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_461 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_461)) {
            tmp_assign_source_488 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_461,
                (PyObject *)moduledict_numpy,
                mod_consts[612],
                const_int_0
            );
        } else {
            tmp_assign_source_488 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_461, mod_consts[612]);
        }

        if (tmp_assign_source_488 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 238;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[612], tmp_assign_source_488);
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_lineno_21 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_21 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_13__module);
    Py_DECREF(tmp_import_from_13__module);
    tmp_import_from_13__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    CHECK_OBJECT(tmp_import_from_13__module);
    Py_DECREF(tmp_import_from_13__module);
    tmp_import_from_13__module = NULL;
    {
        PyObject *tmp_assign_source_489;
        PyObject *tmp_name_value_25;
        PyObject *tmp_globals_arg_value_24;
        PyObject *tmp_locals_arg_value_24;
        PyObject *tmp_fromlist_value_24;
        PyObject *tmp_level_value_24;
        tmp_name_value_25 = mod_consts[613];
        tmp_globals_arg_value_24 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_24 = Py_None;
        tmp_fromlist_value_24 = mod_consts[614];
        tmp_level_value_24 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 242;
        tmp_assign_source_489 = IMPORT_MODULE5(tstate, tmp_name_value_25, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
        if (tmp_assign_source_489 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_14__module == NULL);
        tmp_import_from_14__module = tmp_assign_source_489;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_490;
        PyObject *tmp_import_name_from_462;
        CHECK_OBJECT(tmp_import_from_14__module);
        tmp_import_name_from_462 = tmp_import_from_14__module;
        if (PyModule_Check(tmp_import_name_from_462)) {
            tmp_assign_source_490 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_462,
                (PyObject *)moduledict_numpy,
                mod_consts[615],
                const_int_0
            );
        } else {
            tmp_assign_source_490 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_462, mod_consts[615]);
        }

        if (tmp_assign_source_490 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 242;

            goto try_except_handler_22;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[615], tmp_assign_source_490);
    }
    {
        PyObject *tmp_assign_source_491;
        PyObject *tmp_import_name_from_463;
        CHECK_OBJECT(tmp_import_from_14__module);
        tmp_import_name_from_463 = tmp_import_from_14__module;
        if (PyModule_Check(tmp_import_name_from_463)) {
            tmp_assign_source_491 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_463,
                (PyObject *)moduledict_numpy,
                mod_consts[616],
                const_int_0
            );
        } else {
            tmp_assign_source_491 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_463, mod_consts[616]);
        }

        if (tmp_assign_source_491 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 242;

            goto try_except_handler_22;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[616], tmp_assign_source_491);
    }
    {
        PyObject *tmp_assign_source_492;
        PyObject *tmp_import_name_from_464;
        CHECK_OBJECT(tmp_import_from_14__module);
        tmp_import_name_from_464 = tmp_import_from_14__module;
        if (PyModule_Check(tmp_import_name_from_464)) {
            tmp_assign_source_492 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_464,
                (PyObject *)moduledict_numpy,
                mod_consts[617],
                const_int_0
            );
        } else {
            tmp_assign_source_492 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_464, mod_consts[617]);
        }

        if (tmp_assign_source_492 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 242;

            goto try_except_handler_22;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[617], tmp_assign_source_492);
    }
    {
        PyObject *tmp_assign_source_493;
        PyObject *tmp_import_name_from_465;
        CHECK_OBJECT(tmp_import_from_14__module);
        tmp_import_name_from_465 = tmp_import_from_14__module;
        if (PyModule_Check(tmp_import_name_from_465)) {
            tmp_assign_source_493 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_465,
                (PyObject *)moduledict_numpy,
                mod_consts[618],
                const_int_0
            );
        } else {
            tmp_assign_source_493 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_465, mod_consts[618]);
        }

        if (tmp_assign_source_493 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 242;

            goto try_except_handler_22;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[618], tmp_assign_source_493);
    }
    {
        PyObject *tmp_assign_source_494;
        PyObject *tmp_import_name_from_466;
        CHECK_OBJECT(tmp_import_from_14__module);
        tmp_import_name_from_466 = tmp_import_from_14__module;
        if (PyModule_Check(tmp_import_name_from_466)) {
            tmp_assign_source_494 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_466,
                (PyObject *)moduledict_numpy,
                mod_consts[619],
                const_int_0
            );
        } else {
            tmp_assign_source_494 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_466, mod_consts[619]);
        }

        if (tmp_assign_source_494 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 242;

            goto try_except_handler_22;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[619], tmp_assign_source_494);
    }
    {
        PyObject *tmp_assign_source_495;
        PyObject *tmp_import_name_from_467;
        CHECK_OBJECT(tmp_import_from_14__module);
        tmp_import_name_from_467 = tmp_import_from_14__module;
        if (PyModule_Check(tmp_import_name_from_467)) {
            tmp_assign_source_495 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_467,
                (PyObject *)moduledict_numpy,
                mod_consts[620],
                const_int_0
            );
        } else {
            tmp_assign_source_495 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_467, mod_consts[620]);
        }

        if (tmp_assign_source_495 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 242;

            goto try_except_handler_22;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[620], tmp_assign_source_495);
    }
    {
        PyObject *tmp_assign_source_496;
        PyObject *tmp_import_name_from_468;
        CHECK_OBJECT(tmp_import_from_14__module);
        tmp_import_name_from_468 = tmp_import_from_14__module;
        if (PyModule_Check(tmp_import_name_from_468)) {
            tmp_assign_source_496 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_468,
                (PyObject *)moduledict_numpy,
                mod_consts[621],
                const_int_0
            );
        } else {
            tmp_assign_source_496 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_468, mod_consts[621]);
        }

        if (tmp_assign_source_496 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 242;

            goto try_except_handler_22;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[621], tmp_assign_source_496);
    }
    {
        PyObject *tmp_assign_source_497;
        PyObject *tmp_import_name_from_469;
        CHECK_OBJECT(tmp_import_from_14__module);
        tmp_import_name_from_469 = tmp_import_from_14__module;
        if (PyModule_Check(tmp_import_name_from_469)) {
            tmp_assign_source_497 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_469,
                (PyObject *)moduledict_numpy,
                mod_consts[622],
                const_int_0
            );
        } else {
            tmp_assign_source_497 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_469, mod_consts[622]);
        }

        if (tmp_assign_source_497 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 242;

            goto try_except_handler_22;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[622], tmp_assign_source_497);
    }
    {
        PyObject *tmp_assign_source_498;
        PyObject *tmp_import_name_from_470;
        CHECK_OBJECT(tmp_import_from_14__module);
        tmp_import_name_from_470 = tmp_import_from_14__module;
        if (PyModule_Check(tmp_import_name_from_470)) {
            tmp_assign_source_498 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_470,
                (PyObject *)moduledict_numpy,
                mod_consts[623],
                const_int_0
            );
        } else {
            tmp_assign_source_498 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_470, mod_consts[623]);
        }

        if (tmp_assign_source_498 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 242;

            goto try_except_handler_22;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[623], tmp_assign_source_498);
    }
    {
        PyObject *tmp_assign_source_499;
        PyObject *tmp_import_name_from_471;
        CHECK_OBJECT(tmp_import_from_14__module);
        tmp_import_name_from_471 = tmp_import_from_14__module;
        if (PyModule_Check(tmp_import_name_from_471)) {
            tmp_assign_source_499 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_471,
                (PyObject *)moduledict_numpy,
                mod_consts[624],
                const_int_0
            );
        } else {
            tmp_assign_source_499 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_471, mod_consts[624]);
        }

        if (tmp_assign_source_499 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 242;

            goto try_except_handler_22;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[624], tmp_assign_source_499);
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_lineno_22 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_22 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_14__module);
    Py_DECREF(tmp_import_from_14__module);
    tmp_import_from_14__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    CHECK_OBJECT(tmp_import_from_14__module);
    Py_DECREF(tmp_import_from_14__module);
    tmp_import_from_14__module = NULL;
    {
        PyObject *tmp_assign_source_500;
        PyObject *tmp_name_value_26;
        PyObject *tmp_globals_arg_value_25;
        PyObject *tmp_locals_arg_value_25;
        PyObject *tmp_fromlist_value_25;
        PyObject *tmp_level_value_25;
        tmp_name_value_26 = mod_consts[625];
        tmp_globals_arg_value_25 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_25 = Py_None;
        tmp_fromlist_value_25 = mod_consts[626];
        tmp_level_value_25 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 246;
        tmp_assign_source_500 = IMPORT_MODULE5(tstate, tmp_name_value_26, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
        if (tmp_assign_source_500 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_15__module == NULL);
        tmp_import_from_15__module = tmp_assign_source_500;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_501;
        PyObject *tmp_import_name_from_472;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_472 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_472)) {
            tmp_assign_source_501 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_472,
                (PyObject *)moduledict_numpy,
                mod_consts[627],
                const_int_0
            );
        } else {
            tmp_assign_source_501 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_472, mod_consts[627]);
        }

        if (tmp_assign_source_501 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 246;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[627], tmp_assign_source_501);
    }
    {
        PyObject *tmp_assign_source_502;
        PyObject *tmp_import_name_from_473;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_473 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_473)) {
            tmp_assign_source_502 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_473,
                (PyObject *)moduledict_numpy,
                mod_consts[628],
                const_int_0
            );
        } else {
            tmp_assign_source_502 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_473, mod_consts[628]);
        }

        if (tmp_assign_source_502 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 246;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[628], tmp_assign_source_502);
    }
    {
        PyObject *tmp_assign_source_503;
        PyObject *tmp_import_name_from_474;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_474 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_474)) {
            tmp_assign_source_503 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_474,
                (PyObject *)moduledict_numpy,
                mod_consts[629],
                const_int_0
            );
        } else {
            tmp_assign_source_503 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_474, mod_consts[629]);
        }

        if (tmp_assign_source_503 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 246;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[629], tmp_assign_source_503);
    }
    {
        PyObject *tmp_assign_source_504;
        PyObject *tmp_import_name_from_475;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_475 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_475)) {
            tmp_assign_source_504 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_475,
                (PyObject *)moduledict_numpy,
                mod_consts[630],
                const_int_0
            );
        } else {
            tmp_assign_source_504 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_475, mod_consts[630]);
        }

        if (tmp_assign_source_504 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 246;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[630], tmp_assign_source_504);
    }
    {
        PyObject *tmp_assign_source_505;
        PyObject *tmp_import_name_from_476;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_476 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_476)) {
            tmp_assign_source_505 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_476,
                (PyObject *)moduledict_numpy,
                mod_consts[631],
                const_int_0
            );
        } else {
            tmp_assign_source_505 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_476, mod_consts[631]);
        }

        if (tmp_assign_source_505 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 246;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[631], tmp_assign_source_505);
    }
    {
        PyObject *tmp_assign_source_506;
        PyObject *tmp_import_name_from_477;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_477 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_477)) {
            tmp_assign_source_506 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_477,
                (PyObject *)moduledict_numpy,
                mod_consts[632],
                const_int_0
            );
        } else {
            tmp_assign_source_506 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_477, mod_consts[632]);
        }

        if (tmp_assign_source_506 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 246;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[632], tmp_assign_source_506);
    }
    {
        PyObject *tmp_assign_source_507;
        PyObject *tmp_import_name_from_478;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_478 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_478)) {
            tmp_assign_source_507 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_478,
                (PyObject *)moduledict_numpy,
                mod_consts[633],
                const_int_0
            );
        } else {
            tmp_assign_source_507 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_478, mod_consts[633]);
        }

        if (tmp_assign_source_507 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 246;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[633], tmp_assign_source_507);
    }
    {
        PyObject *tmp_assign_source_508;
        PyObject *tmp_import_name_from_479;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_479 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_479)) {
            tmp_assign_source_508 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_479,
                (PyObject *)moduledict_numpy,
                mod_consts[634],
                const_int_0
            );
        } else {
            tmp_assign_source_508 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_479, mod_consts[634]);
        }

        if (tmp_assign_source_508 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 246;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[634], tmp_assign_source_508);
    }
    {
        PyObject *tmp_assign_source_509;
        PyObject *tmp_import_name_from_480;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_480 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_480)) {
            tmp_assign_source_509 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_480,
                (PyObject *)moduledict_numpy,
                mod_consts[635],
                const_int_0
            );
        } else {
            tmp_assign_source_509 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_480, mod_consts[635]);
        }

        if (tmp_assign_source_509 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 246;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[635], tmp_assign_source_509);
    }
    {
        PyObject *tmp_assign_source_510;
        PyObject *tmp_import_name_from_481;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_481 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_481)) {
            tmp_assign_source_510 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_481,
                (PyObject *)moduledict_numpy,
                mod_consts[636],
                const_int_0
            );
        } else {
            tmp_assign_source_510 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_481, mod_consts[636]);
        }

        if (tmp_assign_source_510 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 246;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[636], tmp_assign_source_510);
    }
    {
        PyObject *tmp_assign_source_511;
        PyObject *tmp_import_name_from_482;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_482 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_482)) {
            tmp_assign_source_511 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_482,
                (PyObject *)moduledict_numpy,
                mod_consts[637],
                const_int_0
            );
        } else {
            tmp_assign_source_511 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_482, mod_consts[637]);
        }

        if (tmp_assign_source_511 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 246;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[637], tmp_assign_source_511);
    }
    {
        PyObject *tmp_assign_source_512;
        PyObject *tmp_import_name_from_483;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_483 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_483)) {
            tmp_assign_source_512 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_483,
                (PyObject *)moduledict_numpy,
                mod_consts[638],
                const_int_0
            );
        } else {
            tmp_assign_source_512 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_483, mod_consts[638]);
        }

        if (tmp_assign_source_512 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 246;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[638], tmp_assign_source_512);
    }
    {
        PyObject *tmp_assign_source_513;
        PyObject *tmp_import_name_from_484;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_484 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_484)) {
            tmp_assign_source_513 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_484,
                (PyObject *)moduledict_numpy,
                mod_consts[639],
                const_int_0
            );
        } else {
            tmp_assign_source_513 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_484, mod_consts[639]);
        }

        if (tmp_assign_source_513 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 246;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[639], tmp_assign_source_513);
    }
    {
        PyObject *tmp_assign_source_514;
        PyObject *tmp_import_name_from_485;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_485 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_485)) {
            tmp_assign_source_514 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_485,
                (PyObject *)moduledict_numpy,
                mod_consts[640],
                const_int_0
            );
        } else {
            tmp_assign_source_514 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_485, mod_consts[640]);
        }

        if (tmp_assign_source_514 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 246;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[640], tmp_assign_source_514);
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_lineno_23 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_23 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_15__module);
    Py_DECREF(tmp_import_from_15__module);
    tmp_import_from_15__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    CHECK_OBJECT(tmp_import_from_15__module);
    Py_DECREF(tmp_import_from_15__module);
    tmp_import_from_15__module = NULL;
    {
        PyObject *tmp_assign_source_515;
        PyObject *tmp_import_name_from_486;
        PyObject *tmp_name_value_27;
        PyObject *tmp_globals_arg_value_26;
        PyObject *tmp_locals_arg_value_26;
        PyObject *tmp_fromlist_value_26;
        PyObject *tmp_level_value_26;
        tmp_name_value_27 = mod_consts[47];
        tmp_globals_arg_value_26 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_26 = Py_None;
        tmp_fromlist_value_26 = mod_consts[641];
        tmp_level_value_26 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 252;
        tmp_import_name_from_486 = IMPORT_MODULE5(tstate, tmp_name_value_27, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
        if (tmp_import_name_from_486 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_486)) {
            tmp_assign_source_515 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_486,
                (PyObject *)moduledict_numpy,
                mod_consts[642],
                const_int_0
            );
        } else {
            tmp_assign_source_515 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_486, mod_consts[642]);
        }

        Py_DECREF(tmp_import_name_from_486);
        if (tmp_assign_source_515 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[643], tmp_assign_source_515);
    }
    {
        PyObject *tmp_assign_source_516;
        PyObject *tmp_name_value_28;
        PyObject *tmp_globals_arg_value_27;
        PyObject *tmp_locals_arg_value_27;
        PyObject *tmp_fromlist_value_27;
        PyObject *tmp_level_value_27;
        tmp_name_value_28 = mod_consts[642];
        tmp_globals_arg_value_27 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_27 = Py_None;
        tmp_fromlist_value_27 = mod_consts[644];
        tmp_level_value_27 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 253;
        tmp_assign_source_516 = IMPORT_MODULE5(tstate, tmp_name_value_28, tmp_globals_arg_value_27, tmp_locals_arg_value_27, tmp_fromlist_value_27, tmp_level_value_27);
        if (tmp_assign_source_516 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_16__module == NULL);
        tmp_import_from_16__module = tmp_assign_source_516;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_517;
        PyObject *tmp_import_name_from_487;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_487 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_487)) {
            tmp_assign_source_517 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_487,
                (PyObject *)moduledict_numpy,
                mod_consts[645],
                const_int_0
            );
        } else {
            tmp_assign_source_517 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_487, mod_consts[645]);
        }

        if (tmp_assign_source_517 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 253;

            goto try_except_handler_24;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[645], tmp_assign_source_517);
    }
    {
        PyObject *tmp_assign_source_518;
        PyObject *tmp_import_name_from_488;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_488 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_488)) {
            tmp_assign_source_518 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_488,
                (PyObject *)moduledict_numpy,
                mod_consts[646],
                const_int_0
            );
        } else {
            tmp_assign_source_518 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_488, mod_consts[646]);
        }

        if (tmp_assign_source_518 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 253;

            goto try_except_handler_24;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[646], tmp_assign_source_518);
    }
    {
        PyObject *tmp_assign_source_519;
        PyObject *tmp_import_name_from_489;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_489 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_489)) {
            tmp_assign_source_519 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_489,
                (PyObject *)moduledict_numpy,
                mod_consts[647],
                const_int_0
            );
        } else {
            tmp_assign_source_519 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_489, mod_consts[647]);
        }

        if (tmp_assign_source_519 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 253;

            goto try_except_handler_24;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[647], tmp_assign_source_519);
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_lineno_24 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_24 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_16__module);
    Py_DECREF(tmp_import_from_16__module);
    tmp_import_from_16__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    CHECK_OBJECT(tmp_import_from_16__module);
    Py_DECREF(tmp_import_from_16__module);
    tmp_import_from_16__module = NULL;
    {
        PyObject *tmp_assign_source_520;
        tmp_assign_source_520 = PySet_New(mod_consts[648]);
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_520);
    }
    {
        PyObject *tmp_assign_source_521;
        tmp_assign_source_521 = mod_consts[649];
        UPDATE_STRING_DICT0(moduledict_numpy, (Nuitka_StringObject *)mod_consts[650], tmp_assign_source_521);
    }
    {
        PyObject *tmp_assign_source_522;
        tmp_assign_source_522 = mod_consts[651];
        UPDATE_STRING_DICT0(moduledict_numpy, (Nuitka_StringObject *)mod_consts[652], tmp_assign_source_522);
    }
    {
        PyObject *tmp_assign_source_523;
        tmp_assign_source_523 = mod_consts[653];
        UPDATE_STRING_DICT0(moduledict_numpy, (Nuitka_StringObject *)mod_consts[654], tmp_assign_source_523);
    }
    {
        PyObject *tmp_assign_source_524;
        PyObject *tmp_list_element_2;
        tmp_list_element_2 = mod_consts[655];
        tmp_assign_source_524 = MAKE_LIST_EMPTY(tstate, 5);
        {
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_tuple_element_4;
            PyList_SET_ITEM0(tmp_assign_source_524, 0, tmp_list_element_2);
            tmp_tuple_element_1 = mod_consts[656];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(tstate, 2);
            {
                PyObject *tmp_kw_call_arg_value_0_1;
                PyObject *tmp_kw_call_arg_value_1_1;
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_1);
                tmp_kw_call_arg_value_0_1 = module_var_accessor_numpy_$$__specific_msg(tstate);
                assert(!(tmp_kw_call_arg_value_0_1 == NULL));
                tmp_kw_call_arg_value_1_1 = mod_consts[259];
                frame_frame_numpy->m_frame.f_lineno = 288;
                {
                    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
                    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
                }

                if (tmp_tuple_element_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 288;

                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            PyList_SET_ITEM(tmp_assign_source_524, 1, tmp_list_element_2);
            tmp_tuple_element_2 = mod_consts[657];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(tstate, 2);
            {
                PyObject *tmp_kw_call_arg_value_0_2;
                PyObject *tmp_kw_call_arg_value_1_2;
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_2);
                tmp_kw_call_arg_value_0_2 = module_var_accessor_numpy_$$__specific_msg(tstate);
                assert(!(tmp_kw_call_arg_value_0_2 == NULL));
                tmp_kw_call_arg_value_1_2 = mod_consts[212];
                frame_frame_numpy->m_frame.f_lineno = 289;
                {
                    PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
                    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
                }

                if (tmp_tuple_element_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 289;

                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            PyList_SET_ITEM(tmp_assign_source_524, 2, tmp_list_element_2);
            tmp_tuple_element_3 = mod_consts[658];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(tstate, 2);
            {
                PyObject *tmp_kw_call_arg_value_0_3;
                PyObject *tmp_kw_call_arg_value_1_3;
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_3);
                tmp_kw_call_arg_value_0_3 = module_var_accessor_numpy_$$__specific_msg(tstate);
                assert(!(tmp_kw_call_arg_value_0_3 == NULL));
                tmp_kw_call_arg_value_1_3 = mod_consts[419];
                frame_frame_numpy->m_frame.f_lineno = 290;
                {
                    PyObject *call_args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
                    tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
                }

                if (tmp_tuple_element_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 290;

                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            PyList_SET_ITEM(tmp_assign_source_524, 3, tmp_list_element_2);
            tmp_tuple_element_4 = mod_consts[659];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(tstate, 2);
            {
                PyObject *tmp_kw_call_arg_value_0_4;
                PyObject *tmp_kw_call_arg_value_1_4;
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_4);
                tmp_kw_call_arg_value_0_4 = module_var_accessor_numpy_$$__int_extended_msg(tstate);
                assert(!(tmp_kw_call_arg_value_0_4 == NULL));
                tmp_kw_call_arg_value_1_4 = mod_consts[659];
                frame_frame_numpy->m_frame.f_lineno = 291;
                {
                    PyObject *call_args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_4};
                    tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
                }

                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 291;

                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            PyList_SET_ITEM(tmp_assign_source_524, 4, tmp_list_element_2);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_assign_source_524);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[660], tmp_assign_source_524);
    }
    {
        PyObject *tmp_assign_source_525;
        // Tried code:
        {
            PyObject *tmp_assign_source_526;
            PyObject *tmp_iter_arg_2;
            tmp_iter_arg_2 = module_var_accessor_numpy_$$__type_info(tstate);
            assert(!(tmp_iter_arg_2 == NULL));
            tmp_assign_source_526 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
            if (tmp_assign_source_526 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 293;

                goto try_except_handler_25;
            }
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_526;
        }
        {
            PyObject *tmp_assign_source_527;
            tmp_assign_source_527 = MAKE_DICT_EMPTY(tstate);
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_527;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_528;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_2 = tmp_dictcontraction_1__$0;
            tmp_assign_source_528 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
            if (tmp_assign_source_528 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

                    exception_lineno = 293;
                    goto try_except_handler_26;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_528;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_529;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_iter_arg_3 = tmp_dictcontraction_1__iter_value_0;
            tmp_assign_source_529 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_529 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 293;

                goto try_except_handler_27;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
                tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_529;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_530;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_530 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
            if (tmp_assign_source_530 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 293;

                goto try_except_handler_28;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
                tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_530;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_531;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_531 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
            if (tmp_assign_source_531 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 293;

                goto try_except_handler_28;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
                tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_531;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
            if (tmp_result == false) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 293;

                goto try_except_handler_28;
            }
        }
        goto try_end_23;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_lineno_25 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_25 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_25;
        exception_lineno = exception_keeper_lineno_25;

        goto try_except_handler_27;
        // End of try:
        try_end_23:;
        goto try_end_24;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_lineno_26 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_26 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_26;
        exception_lineno = exception_keeper_lineno_26;

        goto try_except_handler_26;
        // End of try:
        try_end_24:;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_532;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
            tmp_assign_source_532 = tmp_dictcontraction$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_n;
                outline_0_var_n = tmp_assign_source_532;
                Py_INCREF(outline_0_var_n);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_533;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
            tmp_assign_source_533 = tmp_dictcontraction$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_extended_msg;
                outline_0_var_extended_msg = tmp_assign_source_533;
                Py_INCREF(outline_0_var_extended_msg);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_dictset38_key_1;
            PyObject *tmp_dictset38_value_1;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_kw_call_value_0_1;
            PyObject *tmp_kw_call_value_1_1;
            PyObject *tmp_dictset38_dict_1;
            CHECK_OBJECT(outline_0_var_n);
            tmp_dictset38_key_1 = outline_0_var_n;
            tmp_expression_value_5 = module_var_accessor_numpy_$$__msg(tstate);
            if (unlikely(tmp_expression_value_5 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[650]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 294;

                goto try_except_handler_26;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[661]);
            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 294;

                goto try_except_handler_26;
            }
            CHECK_OBJECT(outline_0_var_n);
            tmp_kw_call_value_0_1 = outline_0_var_n;
            CHECK_OBJECT(outline_0_var_extended_msg);
            tmp_kw_call_value_1_1 = outline_0_var_extended_msg;
            frame_frame_numpy->m_frame.f_lineno = 294;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

                tmp_dictset38_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[662]);
            }

            Py_DECREF(tmp_called_value_4);
            if (tmp_dictset38_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 294;

                goto try_except_handler_26;
            }
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_1));
            tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

            Py_DECREF(tmp_dictset38_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 293;

                goto try_except_handler_26;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 293;

            goto try_except_handler_26;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_assign_source_525 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_assign_source_525);
        goto try_return_handler_26;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        goto try_return_handler_25;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_lineno_27 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_27 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_27;
        exception_lineno = exception_keeper_lineno_27;

        goto try_except_handler_25;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        Py_XDECREF(outline_0_var_n);
        outline_0_var_n = NULL;
        Py_XDECREF(outline_0_var_extended_msg);
        outline_0_var_extended_msg = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_lineno_28 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_28 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(outline_0_var_n);
        outline_0_var_n = NULL;
        Py_XDECREF(outline_0_var_extended_msg);
        outline_0_var_extended_msg = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_28;
        exception_lineno = exception_keeper_lineno_28;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 293;
        goto frame_exception_exit_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_525);
    }
    {
        PyObject *tmp_assign_source_534;
        tmp_assign_source_534 = PySet_New(mod_consts[663]);
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_534);
    }
    {
        PyObject *tmp_assign_source_535;
        tmp_assign_source_535 = mod_consts[664];
        UPDATE_STRING_DICT0(moduledict_numpy, (Nuitka_StringObject *)mod_consts[665], tmp_assign_source_535);
    }
    {
        PyObject *tmp_assign_source_536;
        PyObject *tmp_import_name_from_490;
        PyObject *tmp_name_value_29;
        PyObject *tmp_globals_arg_value_28;
        PyObject *tmp_locals_arg_value_28;
        PyObject *tmp_fromlist_value_28;
        PyObject *tmp_level_value_28;
        tmp_name_value_29 = mod_consts[666];
        tmp_globals_arg_value_28 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_28 = Py_None;
        tmp_fromlist_value_28 = mod_consts[667];
        tmp_level_value_28 = const_int_pos_1;
        frame_frame_numpy->m_frame.f_lineno = 308;
        tmp_import_name_from_490 = IMPORT_MODULE5(tstate, tmp_name_value_29, tmp_globals_arg_value_28, tmp_locals_arg_value_28, tmp_fromlist_value_28, tmp_level_value_28);
        if (tmp_import_name_from_490 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_490)) {
            tmp_assign_source_536 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_490,
                (PyObject *)moduledict_numpy,
                mod_consts[668],
                const_int_0
            );
        } else {
            tmp_assign_source_536 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_490, mod_consts[668]);
        }

        Py_DECREF(tmp_import_name_from_490);
        if (tmp_assign_source_536 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[668], tmp_assign_source_536);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_3;
        tmp_expression_value_6 = module_var_accessor_numpy_$$__core(tstate);
        if (unlikely(tmp_expression_value_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[139]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[669]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy->m_frame.f_lineno = 311;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[670]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_537;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_bitor_expr_left_2;
        PyObject *tmp_bitor_expr_right_2;
        PyObject *tmp_bitor_expr_left_3;
        PyObject *tmp_bitor_expr_right_3;
        PyObject *tmp_bitor_expr_left_4;
        PyObject *tmp_bitor_expr_right_4;
        PyObject *tmp_bitor_expr_left_5;
        PyObject *tmp_bitor_expr_right_5;
        PyObject *tmp_bitor_expr_left_6;
        PyObject *tmp_bitor_expr_right_6;
        PyObject *tmp_bitor_expr_left_7;
        PyObject *tmp_bitor_expr_right_7;
        PyObject *tmp_bitor_expr_left_8;
        PyObject *tmp_bitor_expr_right_8;
        PyObject *tmp_bitor_expr_left_9;
        PyObject *tmp_bitor_expr_right_9;
        PyObject *tmp_bitor_expr_left_10;
        PyObject *tmp_bitor_expr_right_10;
        PyObject *tmp_bitor_expr_left_11;
        PyObject *tmp_bitor_expr_right_11;
        PyObject *tmp_bitor_expr_left_12;
        PyObject *tmp_bitor_expr_right_12;
        PyObject *tmp_bitor_expr_left_13;
        PyObject *tmp_bitor_expr_right_13;
        PyObject *tmp_bitor_expr_left_14;
        PyObject *tmp_bitor_expr_right_14;
        PyObject *tmp_bitor_expr_left_15;
        PyObject *tmp_bitor_expr_right_15;
        PyObject *tmp_bitor_expr_left_16;
        PyObject *tmp_bitor_expr_right_16;
        PyObject *tmp_bitor_expr_left_17;
        PyObject *tmp_bitor_expr_right_17;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_set_arg_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_set_arg_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_set_arg_4;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_set_arg_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_set_arg_6;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_set_arg_7;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_set_arg_8;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_set_arg_9;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_set_arg_10;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_set_arg_11;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_set_arg_12;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_set_arg_13;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_set_arg_14;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_set_arg_15;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_set_arg_16;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_expression_value_36;
        tmp_bitor_expr_left_17 = module_var_accessor_numpy_$$___numpy_submodules__(tstate);
        if (unlikely(tmp_bitor_expr_left_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[41]);
        }

        if (tmp_bitor_expr_left_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = module_var_accessor_numpy_$$__core(tstate);
        if (unlikely(tmp_expression_value_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[139]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_set_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[671]);
        if (tmp_set_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_17 = PySet_New(tmp_set_arg_1);
        Py_DECREF(tmp_set_arg_1);
        if (tmp_bitor_expr_right_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_16 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_17, tmp_bitor_expr_right_17);
        Py_DECREF(tmp_bitor_expr_right_17);
        if (tmp_bitor_expr_left_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = module_var_accessor_numpy_$$__mat(tstate);
        if (unlikely(tmp_expression_value_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[643]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_bitor_expr_left_16);

            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_set_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[671]);
        if (tmp_set_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_16);

            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_16 = PySet_New(tmp_set_arg_2);
        Py_DECREF(tmp_set_arg_2);
        if (tmp_bitor_expr_right_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_16);

            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_15 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_16, tmp_bitor_expr_right_16);
        Py_DECREF(tmp_bitor_expr_left_16);
        Py_DECREF(tmp_bitor_expr_right_16);
        if (tmp_bitor_expr_left_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = module_var_accessor_numpy_$$_lib(tstate);
        if (unlikely(tmp_expression_value_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[459]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_bitor_expr_left_15);

            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[672]);
        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_15);

            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_set_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[671]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_set_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_15);

            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_15 = PySet_New(tmp_set_arg_3);
        Py_DECREF(tmp_set_arg_3);
        if (tmp_bitor_expr_right_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_15);

            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_14 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_15, tmp_bitor_expr_right_15);
        Py_DECREF(tmp_bitor_expr_left_15);
        Py_DECREF(tmp_bitor_expr_right_15);
        if (tmp_bitor_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = module_var_accessor_numpy_$$_lib(tstate);
        if (unlikely(tmp_expression_value_12 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[459]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_bitor_expr_left_14);

            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[673]);
        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_14);

            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_set_arg_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[671]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_set_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_14);

            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_14 = PySet_New(tmp_set_arg_4);
        Py_DECREF(tmp_set_arg_4);
        if (tmp_bitor_expr_right_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_14);

            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_13 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_14, tmp_bitor_expr_right_14);
        Py_DECREF(tmp_bitor_expr_left_14);
        Py_DECREF(tmp_bitor_expr_right_14);
        if (tmp_bitor_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = module_var_accessor_numpy_$$_lib(tstate);
        if (unlikely(tmp_expression_value_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[459]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_bitor_expr_left_13);

            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[674]);
        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_13);

            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_set_arg_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[671]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_set_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_13);

            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_13 = PySet_New(tmp_set_arg_5);
        Py_DECREF(tmp_set_arg_5);
        if (tmp_bitor_expr_right_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_13);

            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_12 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_13, tmp_bitor_expr_right_13);
        Py_DECREF(tmp_bitor_expr_left_13);
        Py_DECREF(tmp_bitor_expr_right_13);
        if (tmp_bitor_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = module_var_accessor_numpy_$$_lib(tstate);
        if (unlikely(tmp_expression_value_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[459]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_bitor_expr_left_12);

            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[675]);
        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_12);

            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_set_arg_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[671]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_set_arg_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_12);

            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_12 = PySet_New(tmp_set_arg_6);
        Py_DECREF(tmp_set_arg_6);
        if (tmp_bitor_expr_right_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_12);

            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_11 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_12, tmp_bitor_expr_right_12);
        Py_DECREF(tmp_bitor_expr_left_12);
        Py_DECREF(tmp_bitor_expr_right_12);
        if (tmp_bitor_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_18 = module_var_accessor_numpy_$$_lib(tstate);
        if (unlikely(tmp_expression_value_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[459]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_bitor_expr_left_11);

            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[676]);
        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_11);

            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_set_arg_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[671]);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_set_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_11);

            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_11 = PySet_New(tmp_set_arg_7);
        Py_DECREF(tmp_set_arg_7);
        if (tmp_bitor_expr_right_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_11);

            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_10 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_11, tmp_bitor_expr_right_11);
        Py_DECREF(tmp_bitor_expr_left_11);
        Py_DECREF(tmp_bitor_expr_right_11);
        if (tmp_bitor_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = module_var_accessor_numpy_$$_lib(tstate);
        if (unlikely(tmp_expression_value_20 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[459]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_bitor_expr_left_10);

            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[677]);
        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_10);

            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_set_arg_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[671]);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_set_arg_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_10);

            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_10 = PySet_New(tmp_set_arg_8);
        Py_DECREF(tmp_set_arg_8);
        if (tmp_bitor_expr_right_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_10);

            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_9 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_10, tmp_bitor_expr_right_10);
        Py_DECREF(tmp_bitor_expr_left_10);
        Py_DECREF(tmp_bitor_expr_right_10);
        if (tmp_bitor_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = module_var_accessor_numpy_$$_lib(tstate);
        if (unlikely(tmp_expression_value_22 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[459]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_bitor_expr_left_9);

            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[678]);
        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_9);

            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_set_arg_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[671]);
        Py_DECREF(tmp_expression_value_21);
        if (tmp_set_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_9);

            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_9 = PySet_New(tmp_set_arg_9);
        Py_DECREF(tmp_set_arg_9);
        if (tmp_bitor_expr_right_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_9);

            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_8 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_9, tmp_bitor_expr_right_9);
        Py_DECREF(tmp_bitor_expr_left_9);
        Py_DECREF(tmp_bitor_expr_right_9);
        if (tmp_bitor_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_24 = module_var_accessor_numpy_$$_lib(tstate);
        if (unlikely(tmp_expression_value_24 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[459]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_bitor_expr_left_8);

            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[679]);
        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_8);

            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_set_arg_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[671]);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_set_arg_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_8);

            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_8 = PySet_New(tmp_set_arg_10);
        Py_DECREF(tmp_set_arg_10);
        if (tmp_bitor_expr_right_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_8);

            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_7 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_8, tmp_bitor_expr_right_8);
        Py_DECREF(tmp_bitor_expr_left_8);
        Py_DECREF(tmp_bitor_expr_right_8);
        if (tmp_bitor_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_26 = module_var_accessor_numpy_$$_lib(tstate);
        if (unlikely(tmp_expression_value_26 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[459]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_bitor_expr_left_7);

            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[680]);
        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_7);

            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_set_arg_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[671]);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_set_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_7);

            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_7 = PySet_New(tmp_set_arg_11);
        Py_DECREF(tmp_set_arg_11);
        if (tmp_bitor_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_7);

            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_6 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_7, tmp_bitor_expr_right_7);
        Py_DECREF(tmp_bitor_expr_left_7);
        Py_DECREF(tmp_bitor_expr_right_7);
        if (tmp_bitor_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = module_var_accessor_numpy_$$_lib(tstate);
        if (unlikely(tmp_expression_value_28 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[459]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_bitor_expr_left_6);

            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[681]);
        if (tmp_expression_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_6);

            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_set_arg_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[671]);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_set_arg_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_6);

            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_6 = PySet_New(tmp_set_arg_12);
        Py_DECREF(tmp_set_arg_12);
        if (tmp_bitor_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_6);

            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_5 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_6, tmp_bitor_expr_right_6);
        Py_DECREF(tmp_bitor_expr_left_6);
        Py_DECREF(tmp_bitor_expr_right_6);
        if (tmp_bitor_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_30 = module_var_accessor_numpy_$$_lib(tstate);
        if (unlikely(tmp_expression_value_30 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[459]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[682]);
        if (tmp_expression_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_set_arg_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[671]);
        Py_DECREF(tmp_expression_value_29);
        if (tmp_set_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_5 = PySet_New(tmp_set_arg_13);
        Py_DECREF(tmp_set_arg_13);
        if (tmp_bitor_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_4 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_5, tmp_bitor_expr_right_5);
        Py_DECREF(tmp_bitor_expr_left_5);
        Py_DECREF(tmp_bitor_expr_right_5);
        if (tmp_bitor_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_32 = module_var_accessor_numpy_$$_lib(tstate);
        if (unlikely(tmp_expression_value_32 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[459]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[683]);
        if (tmp_expression_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_set_arg_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[671]);
        Py_DECREF(tmp_expression_value_31);
        if (tmp_set_arg_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_4 = PySet_New(tmp_set_arg_14);
        Py_DECREF(tmp_set_arg_14);
        if (tmp_bitor_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_3 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_4, tmp_bitor_expr_right_4);
        Py_DECREF(tmp_bitor_expr_left_4);
        Py_DECREF(tmp_bitor_expr_right_4);
        if (tmp_bitor_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_34 = module_var_accessor_numpy_$$_lib(tstate);
        if (unlikely(tmp_expression_value_34 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[459]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[684]);
        if (tmp_expression_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_set_arg_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[671]);
        Py_DECREF(tmp_expression_value_33);
        if (tmp_set_arg_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_3 = PySet_New(tmp_set_arg_15);
        Py_DECREF(tmp_set_arg_15);
        if (tmp_bitor_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_2 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_3, tmp_bitor_expr_right_3);
        Py_DECREF(tmp_bitor_expr_left_3);
        Py_DECREF(tmp_bitor_expr_right_3);
        if (tmp_bitor_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_36 = module_var_accessor_numpy_$$_lib(tstate);
        if (unlikely(tmp_expression_value_36 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[459]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[685]);
        if (tmp_expression_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_set_arg_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[671]);
        Py_DECREF(tmp_expression_value_35);
        if (tmp_set_arg_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_2 = PySet_New(tmp_set_arg_16);
        Py_DECREF(tmp_set_arg_16);
        if (tmp_bitor_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
        Py_DECREF(tmp_bitor_expr_left_2);
        Py_DECREF(tmp_bitor_expr_right_2);
        if (tmp_bitor_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_1 = PySet_New(mod_consts[686]);
        tmp_list_arg_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_left_1);
        Py_DECREF(tmp_bitor_expr_right_1);
        if (tmp_list_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_537 = MAKE_LIST(tstate, tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_assign_source_537 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[671], tmp_assign_source_537);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_call_result_4;
        tmp_expression_value_37 = module_var_accessor_numpy_$$_warnings(tstate);
        if (unlikely(tmp_expression_value_37 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[687]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy->m_frame.f_lineno = 335;
        tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts[688], 0), mod_consts[689]);
        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_call_result_5;
        tmp_expression_value_38 = module_var_accessor_numpy_$$_warnings(tstate);
        if (unlikely(tmp_expression_value_38 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[687]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy->m_frame.f_lineno = 336;
        tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[690], 0), mod_consts[689]);
        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_call_result_6;
        tmp_expression_value_39 = module_var_accessor_numpy_$$_warnings(tstate);
        if (unlikely(tmp_expression_value_39 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[687]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy->m_frame.f_lineno = 337;
        tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[691], 0), mod_consts[689]);
        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_538;


        tmp_assign_source_538 = MAKE_FUNCTION_numpy$$$function__2___getattr__(tstate);

        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[692], tmp_assign_source_538);
    }
    {
        PyObject *tmp_assign_source_539;


        tmp_assign_source_539 = MAKE_FUNCTION_numpy$$$function__3___dir__(tstate);

        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[693], tmp_assign_source_539);
    }
    {
        PyObject *tmp_assign_source_540;
        PyObject *tmp_import_name_from_491;
        PyObject *tmp_name_value_30;
        PyObject *tmp_globals_arg_value_29;
        PyObject *tmp_locals_arg_value_29;
        PyObject *tmp_fromlist_value_29;
        PyObject *tmp_level_value_29;
        tmp_name_value_30 = mod_consts[694];
        tmp_globals_arg_value_29 = (PyObject *)moduledict_numpy;
        tmp_locals_arg_value_29 = Py_None;
        tmp_fromlist_value_29 = mod_consts[695];
        tmp_level_value_29 = const_int_0;
        frame_frame_numpy->m_frame.f_lineno = 441;
        tmp_import_name_from_491 = IMPORT_MODULE5(tstate, tmp_name_value_30, tmp_globals_arg_value_29, tmp_locals_arg_value_29, tmp_fromlist_value_29, tmp_level_value_29);
        if (tmp_import_name_from_491 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 441;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_491)) {
            tmp_assign_source_540 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_491,
                (PyObject *)moduledict_numpy,
                mod_consts[696],
                const_int_0
            );
        } else {
            tmp_assign_source_540 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_491, mod_consts[696]);
        }

        Py_DECREF(tmp_import_name_from_491);
        if (tmp_assign_source_540 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 441;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[696], tmp_assign_source_540);
    }
    {
        PyObject *tmp_assign_source_541;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = module_var_accessor_numpy_$$_PytestTester(tstate);
        assert(!(tmp_called_value_8 == NULL));
        frame_frame_numpy->m_frame.f_lineno = 442;
        tmp_assign_source_541 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts[697]);

        if (tmp_assign_source_541 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[698], tmp_assign_source_541);
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy, mod_consts[696]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[696]);

        exception_lineno = 443;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_assign_source_542;


        tmp_assign_source_542 = MAKE_FUNCTION_numpy$$$function__4__sanity_check(tstate);

        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[699], tmp_assign_source_542);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_7;
        tmp_called_value_9 = module_var_accessor_numpy_$$__sanity_check(tstate);
        assert(!(tmp_called_value_9 == NULL));
        frame_frame_numpy->m_frame.f_lineno = 468;
        tmp_call_result_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 468;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy, mod_consts[699]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[699]);

        exception_lineno = 469;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_assign_source_543;


        tmp_assign_source_543 = MAKE_FUNCTION_numpy$$$function__5__mac_os_check(tstate);

        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[700], tmp_assign_source_543);
    }
    if (DICT_REMOVE_ITEM((PyObject *)moduledict_numpy, mod_consts[700]) == false) {
        CLEAR_ERROR_OCCURRED(tstate);
    }

    {
        PyObject *tmp_assign_source_544;


        tmp_assign_source_544 = MAKE_FUNCTION_numpy$$$function__6_hugepage_setup(tstate);

        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[701], tmp_assign_source_544);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_11;
        tmp_expression_value_41 = module_var_accessor_numpy_$$__core(tstate);
        if (unlikely(tmp_expression_value_41 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[139]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 538;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[702]);
        if (tmp_expression_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 538;

            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[703]);
        Py_DECREF(tmp_expression_value_40);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 538;

            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = module_var_accessor_numpy_$$_hugepage_setup(tstate);
        if (unlikely(tmp_called_value_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[701]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_10);

            exception_lineno = 538;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy->m_frame.f_lineno = 538;
        tmp_args_element_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_11);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 538;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy->m_frame.f_lineno = 538;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 538;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy, mod_consts[701]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[701]);

        exception_lineno = 539;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_call_result_9;
        tmp_expression_value_43 = module_var_accessor_numpy_$$__core(tstate);
        if (unlikely(tmp_expression_value_43 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[139]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[702]);
        if (tmp_expression_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[704]);
        Py_DECREF(tmp_expression_value_42);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy->m_frame.f_lineno = 544;
        tmp_call_result_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[705]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_expression_value_45;
        tmp_expression_value_45 = IMPORT_HARD_OS();
        assert(!(tmp_expression_value_45 == NULL));
        tmp_expression_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[84]);
        if (tmp_expression_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 547;

            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[85]);
        Py_DECREF(tmp_expression_value_44);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 547;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy->m_frame.f_lineno = 547;
        tmp_cmp_expr_left_4 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_12, mod_consts[706]);

        Py_DECREF(tmp_called_value_12);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 547;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[707];
        tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 547;

            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_46 = module_var_accessor_numpy_$$_warnings(tstate);
        if (unlikely(tmp_expression_value_46 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 548;

            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[45]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 548;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = mod_consts[708];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_5);
        tmp_tuple_element_5 = module_var_accessor_numpy_$$_UserWarning(tstate);
        if (unlikely(tmp_tuple_element_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[709]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 551;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_5);
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[50]);
        frame_frame_numpy->m_frame.f_lineno = 548;
        tmp_call_result_10 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 548;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_545;


        tmp_assign_source_545 = MAKE_FUNCTION_numpy$$$function__7__pyinstaller_hooks_dir(tstate);

        UPDATE_STRING_DICT1(moduledict_numpy, (Nuitka_StringObject *)mod_consts[710], tmp_assign_source_545);
    }
    branch_end_2:;
    if (DICT_REMOVE_ITEM((PyObject *)moduledict_numpy, mod_consts[83]) == false) {
        CLEAR_ERROR_OCCURRED(tstate);
    }

    if (DICT_REMOVE_ITEM((PyObject *)moduledict_numpy, mod_consts[87]) == false) {
        CLEAR_ERROR_OCCURRED(tstate);
    }

    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy, mod_consts[5]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);

        exception_lineno = 560;

        goto frame_exception_exit_1;
    }



    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_numpy->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_numpy);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy);
    return module_numpy;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
