SELECT products.name, categories.name FROM products, categories
WHERE products.amount > 100 and categories.id = products.id_categories and categories.id = 1 or
products.amount > 100 and categories.id = products.id_categories and categories.id = 2 or
products.amount > 100 and categories.id = products.id_categories and categories.id = 3 or
products.amount > 100 and categories.id = products.id_categories and categories.id = 6 or
products.amount > 100 and categories.id = products.id_categories and categories.id = 9;
