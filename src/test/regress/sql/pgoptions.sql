-- The below command tests that psql doesn't segfault when invoked with invalid
-- PGOPTIONS.
\! PGOPTIONS="-c allow_system_table_mods=ddl" psql -c "SELECT 1" -d postgres
