/**
 *  @file
 *  @copyright defined in eos/LICENSE.txt
 */

#pragma once

#include <string>

#include <eos/chain/types.hpp>
#include <eos/native_contract/genesis_state.hpp>
#include <fc/crypto/sha256.hpp>

namespace eos {
namespace egenesis {

/**
 * Get the chain ID of the built-in egenesis, or chain_id_type()
 * if none was compiled in.
 */
eos::chain::chain_id_type get_egenesis_chain_id();

/**
 * Get the egenesis JSON, or the empty string if none was compiled in.
 */
void compute_egenesis_json(std::string &result);

/**
 * The file returned by compute_egenesis_json() should have this hash.
 */
fc::sha256 get_egenesis_json_hash();
}
} // eos::egenesis
